/*
 * XREFs of BiBindEfiEntries @ 0x140805D6C
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140804D40 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406CF770 (RtlGUIDFromString.c)
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiGetKeyName @ 0x140807D44 (BiGetKeyName.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D71C (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140A5D984 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5DE50 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E380 (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140A5ECA8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, const GUID **a2)
{
  NTSTATUS Object; // edi
  const GUID *v3; // rbx
  unsigned int Data1; // eax
  unsigned int v7; // eax
  GUID v9; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  GUID Guid; // [rsp+60h] [rbp-20h] BYREF

  BcdObjectHandle = 0LL;
  Object = 0;
  v3 = *a2;
  if ( *a2 != (const GUID *)a2 )
  {
    while ( 1 )
    {
      Data1 = v3[3].Data1;
      if ( (Data1 & 0x10) != 0 )
        break;
      if ( (Data1 & 1) != 0 )
      {
        if ( (Data1 & 4) == 0 && (Data1 & 0x20) != 0 && !(unsigned __int8)BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
            goto LABEL_7;
          goto LABEL_15;
        }
        v12 = 0LL;
        SourceString = 0LL;
        v11 = 0LL;
        v7 = v3[3].Data1;
        Guid = 0LL;
        DestinationString = 0LL;
        if ( (v7 & 4) == 0 )
        {
          v12 = 0x101FFFFF00000001LL;
          Object = BiCreateObject((__int64)BcdStoreHandle, 0LL, (unsigned int *)&v12, 1LL, (__int64 *)&v11);
          if ( Object >= 0 )
          {
            Object = BiGetKeyName(v11, &SourceString);
            if ( Object >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              Object = RtlGUIDFromString(&DestinationString, &Guid);
              if ( Object >= 0 )
              {
                v9 = Guid;
                v3[3].Data1 |= 4u;
                v3[1] = v9;
              }
            }
            if ( SourceString )
              ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
          }
          if ( v11 )
            BcdCloseObject(v11);
          if ( Object < 0 )
            goto LABEL_35;
        }
        Object = BiUpdateBcdObject(BcdStoreHandle, v3);
        if ( Object < 0 )
        {
LABEL_35:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)Object);
          return (unsigned int)Object;
        }
      }
      else if ( (Data1 & 4) != 0 )
      {
        if ( (Data1 & 8) != 0 )
        {
          Object = BcdOpenObject(BcdStoreHandle, v3 + 1, &BcdObjectHandle);
          if ( Object < 0 )
            goto LABEL_35;
          BcdDeleteObject(BcdObjectHandle);
          v3[3].Data1 &= 0xFFFFFFF9;
        }
        else if ( !(unsigned __int8)BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v3) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v3);
        }
      }
LABEL_7:
      v3 = *(const GUID **)&v3->Data1;
      if ( v3 == (const GUID *)a2 )
        return (unsigned int)Object;
    }
    if ( (Data1 & 1) == 0 )
      goto LABEL_7;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", v3[2].Data1);
    if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
      goto LABEL_7;
    v3[3].Data1 &= ~1u;
LABEL_15:
    BiRemoveBootEntryFromNvramDisplayOrder(v3);
    goto LABEL_7;
  }
  return (unsigned int)Object;
}

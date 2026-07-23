/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1409D0B64
 * Callers:
 *     NtFilterBootOption @ 0x1409D06F0 (NtFilterBootOption.c)
 * Callees:
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409D0FF4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // eax
  int updated; // ebx
  char *Pool2; // r14
  ULONG v5; // r15d
  unsigned int v6; // r12d
  HANDLE i; // rsi
  _DWORD *v8; // r9
  __int16 v9; // dx
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-20h] BYREF
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor; // [rsp+38h] [rbp-18h] BYREF
  HANDLE BcdStoreHandle[2]; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+98h] [rbp+48h] BYREF
  ULONG ObjectCount; // [rsp+A0h] [rbp+50h] BYREF
  const GUID *BufferSize; // [rsp+A8h] [rbp+58h] BYREF

  *a1 = 0;
  v1 = 0LL;
  BcdObjectHandle = 0LL;
  ObjectCount = 0;
  LODWORD(BufferSize) = 0;
  BcdStoreHandle[0] = 0LL;
  v15 = 0;
  v2 = BiAcquireBcdSyncMutant(0);
  updated = v2;
  if ( v2 >= 0 )
  {
    updated = BiOpenSystemStore((__int64 *)BcdStoreHandle, 0);
    BiReleaseBcdSyncMutant(0);
    v1 = BcdStoreHandle[0];
    if ( updated >= 0 )
    {
      BcdEnumDescriptor = (_BCD_OBJECT_DESCRIPTION)1LL;
      updated = BcdEnumerateObjects(BcdStoreHandle[0], &BcdEnumDescriptor, 0LL, (PULONG)&BufferSize, &ObjectCount);
      if ( updated == -1073741789 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)BufferSize, 1649632595LL);
        if ( Pool2 )
        {
          updated = BcdEnumerateObjects(v1, &BcdEnumDescriptor, Pool2, (PULONG)&BufferSize, &ObjectCount);
          if ( updated >= 0 )
          {
            v5 = 0;
            if ( ObjectCount )
            {
              while ( 1 )
              {
                BufferSize = (const GUID *)&Pool2[24 * v5];
                updated = BcdOpenObject(v1, BufferSize, &BcdObjectHandle);
                if ( updated < 0 )
                  break;
                v6 = 0;
                for ( i = BcdObjectHandle; v6 < *((unsigned __int16 *)qword_140D17E70 + 18); ++v6 )
                {
                  v8 = (_DWORD *)(qword_140D1BEB0 + 12LL * v6);
                  if ( !*v8 || *v8 == *(_DWORD *)(*(_QWORD *)&BufferSize[1].Data1 + 4LL) )
                  {
                    v9 = *(_WORD *)((unsigned int)v8[2] + qword_140D1BEC0);
                    if ( ((v9 & 0x20) == 0 || (dword_140C70F84 & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_140C70F84 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_140D1BEB0 + 12LL * v6, i, &v15);
                      if ( updated < 0 )
                        goto LABEL_24;
                      if ( v15 )
                        *a1 = 1;
                    }
                  }
                }
                BcdCloseObject(i);
                i = 0LL;
                ++v5;
                BcdObjectHandle = 0LL;
                if ( v5 >= ObjectCount )
                  goto LABEL_24;
              }
              i = BcdObjectHandle;
LABEL_24:
              if ( i )
                BcdCloseObject(i);
            }
          }
          ExFreePoolWithTag(Pool2, 0x62536553u);
        }
        else
        {
          updated = -1073741801;
        }
      }
    }
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
  }
  if ( v1 )
    BcdCloseStore(v1);
  return (unsigned int)updated;
}

/*
 * XREFs of BiBindEfiBootManager @ 0x140802DDC
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140802A8C (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     BiQueryBootOptions @ 0x140802820 (BiQueryBootOptions.c)
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BiTranslateBootOrder @ 0x140803C68 (BiTranslateBootOrder.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiTranslateBootEntryId @ 0x140805EC8 (BiTranslateBootEntryId.c)
 *     BiQueryBootEntryOrder @ 0x1408071FC (BiQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiBindEfiBootManager(HANDLE BcdStoreHandle, __int64 a2)
{
  void *v4; // r14
  NTSTATUS v5; // ebx
  __int64 Pool2; // rax
  BCD_FLAGS v7; // r8d
  int v8; // eax
  BCD_FLAGS v9; // r8d
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  BCD_FLAGS v13; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  ULONG v17; // [rsp+48h] [rbp-38h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0;
  v15 = 0;
  Buffer = 0LL;
  v16 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    BcdObjectHandle = 0LL;
  }
  Description.Version = 1;
  Description.Type = 269484033;
  v5 = BcdCreateObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &Description, &BcdObjectHandle);
  if ( v5 >= 0 )
  {
    v5 = BiQueryBootEntryOrder(&v16, &v15);
    if ( v5 >= 0 )
    {
      if ( !v15 )
        goto LABEL_9;
      Pool2 = ExAllocatePool2(258LL, 16LL * v15, 1262764866LL);
      v4 = (void *)Pool2;
      if ( Pool2 )
      {
        BiTranslateBootOrder(a2, v16, Pool2, &v15);
        if ( !v15 || (v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v7, v4, 16 * v15), v5 >= 0) )
        {
LABEL_9:
          v8 = BiQueryBootOptions((_BOOT_OPTIONS **)&P, &v17);
          v10 = (unsigned int *)P;
          v5 = v8;
          if ( v8 >= 0 )
          {
            if ( *((_DWORD *)P + 2) == -1
              || (Buffer = *((unsigned int *)P + 2),
                  v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x25000004u, v9, &Buffer, 8u),
                  v5 >= 0) )
            {
              v11 = v10[4];
              if ( (_DWORD)v11 == -2
                || (int)BiTranslateBootEntryId(a2, v11, &v21) < 0
                || (v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000002u, v13, &v21, 0x10u), v5 >= 0) )
              {
                v5 = 0;
              }
            }
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0x4B444342u);
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( !BcdObjectHandle )
  {
    if ( v5 >= 0 )
      return (unsigned int)v5;
LABEL_31:
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v5 < 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    goto LABEL_31;
  }
  BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v5;
}

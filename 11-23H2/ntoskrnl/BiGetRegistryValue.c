/*
 * XREFs of BiGetRegistryValue @ 0x140805714
 * Callers:
 *     BiWasFirmwareModified @ 0x140373DF4 (BiWasFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x140802520 (BiMarkTreatAsSystemStore.c)
 *     BiIsSystemStore @ 0x140803220 (BiIsSystemStore.c)
 *     BiIsWinPEBoot @ 0x1408032E4 (BiIsWinPEBoot.c)
 *     BiUpdateBcdObject @ 0x1408045D4 (BiUpdateBcdObject.c)
 *     BiGetObjectDescription @ 0x140804EBC (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BiGetSavedBootEntry @ 0x140805E44 (BiGetSavedBootEntry.c)
 *     BiUnloadHiveByHandle @ 0x140A5D7B4 (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D95C (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140369B6C (BiSanitizeHandle.c)
 *     CmSiCloseSection @ 0x140373F9C (CmSiCloseSection.c)
 *     BiZwQueryValueKey @ 0x140373FB4 (BiZwQueryValueKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiGetRegistryValue(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  const WCHAR *v7; // rbx
  const WCHAR *v8; // rax
  unsigned int i; // r12d
  _DWORD *Pool2; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  void *v14; // rsi
  int v15; // ebx
  __int64 v16; // r8
  void *v17; // rax
  ULONG Size; // [rsp+30h] [rbp-68h] BYREF
  int Size_4; // [rsp+34h] [rbp-64h]
  ULONG v21; // [rsp+38h] [rbp-60h] BYREF
  void *v22; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v7 = a3;
  v8 = a2;
  v21 = 0;
  Size = 0;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    Pool2 = 0LL;
    v22 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = BiSanitizeHandle(a1);
    a1 = v12;
    if ( v7 )
    {
      v15 = BiOpenKey(v12, v7, 0x20019u, &v22);
      Size_4 = v15;
      v14 = v22;
      if ( v15 < 0 )
        goto LABEL_11;
    }
    else
    {
      v14 = (void *)v12;
    }
    v15 = BiZwQueryValueKey(v14, &DestinationString, v13, 0LL, 0, &Size);
    Size_4 = v15;
    if ( v15 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(258LL, Size, 1262764866LL);
      if ( !Pool2 )
        goto LABEL_20;
      v15 = BiZwQueryValueKey(v14, &DestinationString, v16, Pool2, Size, &v21);
      Size_4 = v15;
      if ( v15 >= 0 )
      {
        if ( Pool2[1] == a4 )
        {
          Size -= 12;
          v17 = (void *)ExAllocatePool2(258LL, Size, 1262764866LL);
          *a5 = v17;
          if ( v17 )
          {
            memmove(v17, Pool2 + 3, Size);
            *a6 = Size;
            v15 = 0;
          }
          else
          {
LABEL_20:
            v15 = -1073741670;
          }
        }
        else
        {
          BiLogMessage(4LL, L"Unexpected type for BCD element. Expected type: 0x%x Actual type: 0x%x", a4);
          v15 = -1073741788;
        }
        Size_4 = v15;
      }
    }
LABEL_11:
    if ( v14 != (void *)a1 && v14 )
      CmSiCloseSection(v14);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v15 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a3;
    v8 = a2;
  }
  return (unsigned int)v15;
}

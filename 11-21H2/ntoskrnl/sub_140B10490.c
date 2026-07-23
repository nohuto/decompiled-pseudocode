/*
 * XREFs of sub_140B10490 @ 0x140B10490
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140B10490(_BYTE *a1)
{
  ULONG *v1; // rbx
  void *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  ULONG v8; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF
  ULONG *v11; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v1 = 0LL;
  *a1 = 0;
  v11 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  ValueName = 0LL;
  if ( sub_14082EF44(&Handle, 0LL, &stru_140D3CD08, 0xF003Fu) >= 0 )
  {
    if ( sub_14067B838(Handle, L"SystemBiosVersion", 0, &v11) < 0 )
    {
      v1 = v11;
    }
    else
    {
      v5 = sub_14082EC0C(v4, 0xF003Fu, &KeyHandle);
      v1 = v11;
      if ( v5 >= 0 )
      {
        v7 = sub_14067B838(KeyHandle, L"SystemBiosVersion", 0, &v13);
        v3 = v13;
        if ( v7 == -1073741772
          || v7 >= 0
          && (v1[1] != v13[1]
           || (v8 = v1[3], v8 != v13[3])
           || memcmp((char *)v1 + v1[2], (char *)v13 + (unsigned int)v13[2], v8)) )
        {
          *(_DWORD *)&ValueName.Length = 2359330;
          ValueName.Buffer = (wchar_t *)L"SystemBiosVersion";
          if ( ZwSetValueKey(KeyHandle, &ValueName, 0, v1[1], (char *)v1 + v1[2], v1[3]) >= 0 )
            *a1 = 1;
        }
      }
      if ( KeyHandle )
        sub_14082EB8C(v6, KeyHandle);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}

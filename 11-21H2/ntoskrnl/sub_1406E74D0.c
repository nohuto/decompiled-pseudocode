/*
 * XREFs of sub_1406E74D0 @ 0x1406E74D0
 * Callers:
 *     sub_14067ABD0 @ 0x14067ABD0 (sub_14067ABD0.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406E74D0(HANDLE KeyHandle, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  PVOID v8; // rbx
  PVOID v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-59h]
  WCHAR *v11; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-31h] BYREF
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  _OWORD KeyInformation[3]; // [rsp+68h] [rbp-21h] BYREF
  WCHAR v16[12]; // [rsp+98h] [rbp+Fh] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ResultLength = 0;
  P = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v11 = v16;
  sub_1402DFBC4(v16, 0xAuLL, &v11, 0LL, 0, L"%u", a2);
  v6 = v11 - v16;
  ValueName.MaximumLength = 20;
  if ( (_DWORD)v6 == -1 )
    ValueName.Length = 20;
  else
    ValueName.Length = 2 * v6;
  ValueName.Buffer = v16;
  if ( sub_14067B838(KeyHandle, v16, 0, &P) < 0 )
  {
    v9 = P;
  }
  else
  {
    ZwDeleteValueKey(KeyHandle, &ValueName);
    LODWORD(v10) = a3;
    v11 = v16;
    sub_1402DFBC4(v16, 0xAuLL, &v11, 0LL, 0, L"%u", v10);
    ValueName.MaximumLength = 20;
    v7 = v11 - v16;
    if ( (_DWORD)v7 == -1 )
      ValueName.Length = 20;
    else
      ValueName.Length = 2 * v7;
    v8 = P;
    ValueName.Buffer = v16;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3));
    ExFreePoolWithTag(v8, 0);
    v9 = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}

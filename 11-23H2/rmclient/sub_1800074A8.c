/*
 * XREFs of sub_1800074A8 @ 0x1800074A8
 * Callers:
 *     sub_180007560 @ 0x180007560 (sub_180007560.c)
 * Callees:
 *     sub_180007638 @ 0x180007638 (sub_180007638.c)
 *     sub_180007688 @ 0x180007688 (sub_180007688.c)
 */

__int64 __fastcall sub_1800074A8(PSID Sid, __int64 a2, __int64 a3, __int64 a4, WCHAR *a5, HKEY *a6)
{
  WCHAR *v6; // rdi
  NTSTATUS v7; // ebx
  int v8; // r9d
  HKEY v9; // rcx
  struct _UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF
  HKEY v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a5;
  v12 = 0LL;
  *(_QWORD *)&v11.Length = 33292288LL;
  v11.Buffer = a5;
  v7 = RtlConvertSidToUnicodeString(&v11, Sid, 0);
  if ( v7 < 0
    || (v7 = sub_180007688(v6), v7 < 0)
    || (v7 = sub_180007638(-2147483645, (_DWORD)v6, 0, v8, (__int64)&v12), v7 < 0) )
  {
    v9 = v12;
  }
  else
  {
    *a6 = v12;
    v9 = 0LL;
    v12 = 0LL;
    v7 = 0;
  }
  if ( v9 )
    RegCloseKey(v9);
  return (unsigned int)v7;
}

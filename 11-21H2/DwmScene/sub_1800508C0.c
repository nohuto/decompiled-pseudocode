/*
 * XREFs of sub_1800508C0 @ 0x1800508C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18002B6CC @ 0x18002B6CC (sub_18002B6CC.c)
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_1800506D4 @ 0x1800506D4 (sub_1800506D4.c)
 *     sub_18008E828 @ 0x18008E828 (sub_18008E828.c)
 */

__int64 __fastcall sub_1800508C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // edx
  unsigned __int64 *v7; // rax
  _BYTE v8[96]; // [rsp+30h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    sub_18002B6CC((__int64)v8, 12LL, 8LL, sub_1800108D0);
    v7 = (unsigned __int64 *)sub_1800462C0(a1);
    sub_1800506D4(v7, (__int64)v8);
    sub_18008E828(a1);
  }
  return result;
}

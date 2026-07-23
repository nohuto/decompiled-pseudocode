/*
 * XREFs of sub_1409EA6C0 @ 0x1409EA6C0
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409E386C @ 0x1409E386C (sub_1409E386C.c)
 */

__int64 __fastcall sub_1409EA6C0(char a1, __int64 a2)
{
  const char *v2; // r8
  int v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+34h] [rbp-34h] BYREF
  __int64 v8; // [rsp+44h] [rbp-24h]

  v8 = 0LL;
  v2 = "RefSetStart::AutoMark";
  v6 = a1 != 0;
  if ( !a1 )
    v2 = "RefSetStop::AutoMark";
  v7 = 0LL;
  sub_1402A1054(&v7, 22LL, (__int64)v2);
  return sub_1409E386C(a2, &v6, (unsigned int)(a1 != 0) + 25, 1, 0);
}

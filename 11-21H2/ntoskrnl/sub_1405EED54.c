/*
 * XREFs of sub_1405EED54 @ 0x1405EED54
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 */

__int64 __fastcall sub_1405EED54(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  LODWORD(v2) = 2;
  v3 = 0LL;
  return sub_14041FB10(a1, &v2);
}

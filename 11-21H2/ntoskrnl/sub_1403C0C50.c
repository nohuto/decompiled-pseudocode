/*
 * XREFs of sub_1403C0C50 @ 0x1403C0C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 */

__int64 __fastcall sub_1403C0C50(__int128 *a1, int *a2, int a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  if ( a3 != 4 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  v6 = *a2;
  v5 = v3;
  sub_140828EBC(0LL, 20LL, &v5);
  return 0LL;
}

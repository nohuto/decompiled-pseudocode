/*
 * XREFs of sub_14050E73C @ 0x14050E73C
 * Callers:
 *     sub_14051C8F0 @ 0x14051C8F0 (sub_14051C8F0.c)
 *     sub_14051CA0C @ 0x14051CA0C (sub_14051CA0C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050EE34 @ 0x14050EE34 (sub_14050EE34.c)
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 */

__int64 __fastcall sub_14050E73C(__int64 a1, int a2, __int16 a3, char a4, char a5)
{
  int v8; // edx
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0;
  if ( (int)sub_14050EE34(a1, &v10) < 0 )
    return 3221225473LL;
  if ( (_DWORD)v10 != 3 )
    return 3221225659LL;
  LOBYTE(v8) = 1;
  if ( (int)sub_14051C2D8(a2, v8, DWORD2(v10), v11, a3, a4, a5, 0) < 0 )
    return 3221225473LL;
  else
    return 0LL;
}

/*
 * XREFs of sub_1405237B0 @ 0x1405237B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405237B0(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]

  if ( !qword_140C4C550 )
    return 0x8000000000000003uLL;
  result = sub_14042A5E0(0LL, 0LL);
  *a1 = v5;
  if ( a2 )
  {
    *(_QWORD *)a2 = v6;
    *(_DWORD *)(a2 + 8) = v7;
  }
  return result;
}

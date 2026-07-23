/*
 * XREFs of sub_1405239D0 @ 0x1405239D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405239D0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-30h]

  if ( !qword_140C4C550 )
    return 0x8000000000000003uLL;
  result = sub_14042A5E0(8LL, 0LL);
  *a2 = v8;
  *a3 = v9;
  *a4 = v10;
  return result;
}

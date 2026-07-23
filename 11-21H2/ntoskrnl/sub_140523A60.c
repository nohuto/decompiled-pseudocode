/*
 * XREFs of sub_140523A60 @ 0x140523A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140523A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !qword_140C4C550 || a3 || a4 )
    return 0x8000000000000003uLL;
  else
    return sub_14042A5E0(2LL, 0LL);
}

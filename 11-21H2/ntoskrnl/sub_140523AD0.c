/*
 * XREFs of sub_140523AD0 @ 0x140523AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140523AD0()
{
  if ( qword_140C4C550 )
    return sub_14042A5E0(1LL, 0LL);
  else
    return 0x8000000000000003uLL;
}

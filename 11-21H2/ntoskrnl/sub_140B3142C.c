/*
 * XREFs of sub_140B3142C @ 0x140B3142C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_UNKNOWN **sub_140B3142C()
{
  _UNKNOWN **result; // rax
  __int128 v1; // [rsp+50h] [rbp-30h]
  __int128 v2; // [rsp+60h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF

  result = &retaddr;
  v1 = 0LL;
  v2 = 0LL;
  if ( dword_140D051C8 && !byte_140C53445 )
  {
    if ( dword_140D051DC )
      return (_UNKNOWN **)sub_14042A5E0(31LL, 8LL);
  }
  return result;
}

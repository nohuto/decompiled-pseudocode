/*
 * XREFs of sub_1403B7AA0 @ 0x1403B7AA0
 * Callers:
 *     sub_140AF6878 @ 0x140AF6878 (sub_140AF6878.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_1403B7AA0()
{
  __int64 result; // rax
  unsigned int i; // ebx

  dword_140C507C4 = 17;
  dword_140C507C0[0] = 4;
  result = sub_14042A5E0(49LL, 8LL);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
    {
      sub_14042A5E0(i, 1LL);
      result = (unsigned __int16)word_140D05000;
    }
  }
  return result;
}

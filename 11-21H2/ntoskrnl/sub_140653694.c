/*
 * XREFs of sub_140653694 @ 0x140653694
 * Callers:
 *     sub_140652FB8 @ 0x140652FB8 (sub_140652FB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140653694()
{
  __int64 result; // rax

  if ( (dword_140C10CC0 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140C10CD0 )
    return 3221225485LL;
  result = sub_14042A5E0(qword_140C10CD8, &xmmword_140C10CA0);
  if ( (int)result >= 0 )
    return 3221225485LL;
  return result;
}

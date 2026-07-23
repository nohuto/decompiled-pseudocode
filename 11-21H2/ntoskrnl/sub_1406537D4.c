/*
 * XREFs of sub_1406537D4 @ 0x1406537D4
 * Callers:
 *     sub_140653374 @ 0x140653374 (sub_140653374.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_1406537D4()
{
  __int64 result; // rax

  if ( !qword_140C10CD0 )
    return 3221225485LL;
  result = sub_14042A5E0(qword_140C10CD8, &xmmword_140C10CA0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

/*
 * XREFs of sub_1403DD65C @ 0x1403DD65C
 * Callers:
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 * Callees:
 *     sub_1403DD678 @ 0x1403DD678 (sub_1403DD678.c)
 */

__int64 sub_1403DD65C()
{
  __int64 result; // rax

  result = sub_1403DD678();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

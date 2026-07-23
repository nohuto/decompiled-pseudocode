/*
 * XREFs of sub_1403BF630 @ 0x1403BF630
 * Callers:
 *     sub_1403BF274 @ 0x1403BF274 (sub_1403BF274.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403B1CF0 (KeFlushCurrentTbImmediately.c)
 */

unsigned __int64 sub_1403BF630()
{
  unsigned __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-8h]

  _disable();
  result = KeFlushCurrentTbImmediately();
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}

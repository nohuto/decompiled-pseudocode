/*
 * XREFs of sub_140A4D92C @ 0x140A4D92C
 * Callers:
 *     sub_140A4C0E8 @ 0x140A4C0E8 (sub_140A4C0E8.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4D310 @ 0x140A4D310 (sub_140A4D310.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 *     sub_140A4D828 @ 0x140A4D828 (sub_140A4D828.c)
 *     sub_140A4D96C @ 0x140A4D96C (sub_140A4D96C.c)
 *     sub_140A4DB8C @ 0x140A4DB8C (sub_140A4DB8C.c)
 * Callees:
 *     sub_140222368 @ 0x140222368 (sub_140222368.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER sub_140A4D92C()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(dword_140C548A0 + 1);
    dword_140C548A0 = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      sub_140222368();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}

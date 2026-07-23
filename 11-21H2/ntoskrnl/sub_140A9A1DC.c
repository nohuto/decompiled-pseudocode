/*
 * XREFs of sub_140A9A1DC @ 0x140A9A1DC
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A9F2C0 @ 0x140A9F2C0 (sub_140A9F2C0.c)
 *     sub_140A9F440 @ 0x140A9F440 (sub_140A9F440.c)
 *     sub_140A9F580 @ 0x140A9F580 (sub_140A9F580.c)
 *     sub_140A9F6A0 @ 0x140A9F6A0 (sub_140A9F6A0.c)
 *     sub_140A9F900 @ 0x140A9F900 (sub_140A9F900.c)
 *     sub_140AA0838 @ 0x140AA0838 (sub_140AA0838.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140A9A1DC(void *a1, size_t a2)
{
  unsigned __int8 LowPart; // al
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  if ( a2 >= 0x100 )
    a2 = 256LL;
  if ( a2 != 256 )
    return memset(a1, LowPart | 1u, a2);
  result = (void *)(((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL | ((((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}

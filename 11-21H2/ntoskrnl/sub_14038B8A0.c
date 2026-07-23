/*
 * XREFs of sub_14038B8A0 @ 0x14038B8A0
 * Callers:
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER sub_14038B8A0()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  qword_140C547E8 = 0LL;
  return result;
}

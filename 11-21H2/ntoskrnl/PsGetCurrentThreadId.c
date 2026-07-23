/*
 * XREFs of PsGetCurrentThreadId @ 0x140231BE0
 * Callers:
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     sub_1409F0964 @ 0x1409F0964 (sub_1409F0964.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return (HANDLE)*((_QWORD *)KeGetCurrentThread() + 154);
}

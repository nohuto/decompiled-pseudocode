/*
 * XREFs of KeGetSchedulingGroupSize @ 0x140206E08
 * Callers:
 *     PspGetRateControlSize @ 0x140684F74 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407A9EDC (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}

/*
 * XREFs of PspGetRateControlSize @ 0x140678C2C
 * Callers:
 *     PspFreeRateControl @ 0x140678B4C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140678B98 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14020758C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}

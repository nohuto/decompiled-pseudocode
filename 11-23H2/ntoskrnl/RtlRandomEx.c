/*
 * XREFs of RtlRandomEx @ 0x1402925A0
 * Callers:
 *     PspSelectNodeForProcess @ 0x140705DAC (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A7FE4 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     MiInitializePartition @ 0x1408372A0 (MiInitializePartition.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC5E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140AC2388 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1403175D0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}

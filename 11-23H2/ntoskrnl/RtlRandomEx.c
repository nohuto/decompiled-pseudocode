/*
 * XREFs of RtlRandomEx @ 0x140292830
 * Callers:
 *     PspSelectNodeForProcess @ 0x140705FBC (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A81D4 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     MiInitializePartition @ 0x1408375A0 (MiInitializePartition.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC874 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140AC2378 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}

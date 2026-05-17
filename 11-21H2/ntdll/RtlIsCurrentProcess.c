/*
 * XREFs of RtlIsCurrentProcess @ 0x180074370
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x180074300 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x1800A5400 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}

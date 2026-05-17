/*
 * XREFs of RtlIsCurrentProcess @ 0x18006C250
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x1800E68D8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x1800A0180 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}

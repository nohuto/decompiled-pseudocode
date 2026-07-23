/*
 * XREFs of RtlIsCurrentProcess @ 0x180074370
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x180074300 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x1800A5400 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}

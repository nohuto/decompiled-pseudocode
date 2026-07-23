/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409BD708
 * Callers:
 *     RtlAssert @ 0x1405AA630 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}

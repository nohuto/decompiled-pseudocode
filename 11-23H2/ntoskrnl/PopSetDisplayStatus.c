/*
 * XREFs of PopSetDisplayStatus @ 0x140885168
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FA00 (PsGetProcessSessionIdEx.c)
 *     PopSetSessionDisplayStatus @ 0x1407A5B30 (PopSetSessionDisplayStatus.c)
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EBF48 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}

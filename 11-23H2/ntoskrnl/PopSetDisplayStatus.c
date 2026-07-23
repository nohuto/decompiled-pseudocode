/*
 * XREFs of PopSetDisplayStatus @ 0x1408853A8
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FBA0 (PsGetProcessSessionIdEx.c)
 *     PopSetSessionDisplayStatus @ 0x1407A5D20 (PopSetSessionDisplayStatus.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}

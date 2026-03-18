/*
 * XREFs of PopSetDisplayStatus @ 0x140885638
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     PopSetSessionDisplayStatus @ 0x1407A6040 (PopSetSessionDisplayStatus.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}

/*
 * XREFs of ExUnlockUserBuffer @ 0x140206EC4
 * Callers:
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x1407E13A0 (NtSystemDebugControl.c)
 *     NtQueryBootEntryOrder @ 0x14083D940 (NtQueryBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14083DDB0 (NtEnumerateBootEntries.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x1409722F0 (KdSystemDebugControl.c)
 *     ExpGetHandleInformation @ 0x1409F6744 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F67C4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F6844 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F68C4 (ExpGetObjectInformation.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE184 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1409FEE50 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF310 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF570 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140A495FC (MiCopyLargeVad.c)
 * Callees:
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

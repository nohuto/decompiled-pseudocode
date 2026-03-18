/*
 * XREFs of ExUnlockUserBuffer @ 0x140206EC4
 * Callers:
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x1407E10D0 (NtSystemDebugControl.c)
 *     NtQueryBootEntryOrder @ 0x14083D640 (NtQueryBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14083DAB0 (NtEnumerateBootEntries.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x1409720F0 (KdSystemDebugControl.c)
 *     ExpGetHandleInformation @ 0x1409F64B4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F6534 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F65B4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F6634 (ExpGetObjectInformation.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FDEF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1409FEBC0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF080 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF2E0 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140A4934C (MiCopyLargeVad.c)
 * Callees:
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

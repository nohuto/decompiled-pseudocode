/*
 * XREFs of NtQuerySystemInformation @ 0x1800A4730
 * Callers:
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x180055570 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180073684 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x180079FA0 (TpInitializePackage.c)
 *     RtlSystemTimeToLocalTime @ 0x180084290 (RtlSystemTimeToLocalTime.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBB80 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800E1FA4 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800E88CC (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800EEF30 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800F09C0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180103470 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1801084E4 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010AB3C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x1801181CC (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1801186A4 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of NtQuerySystemInformation @ 0x1800A1570
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800666DC (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSystemTimeToLocalTime @ 0x18007E520 (RtlSystemTimeToLocalTime.c)
 *     TpInitializePackage @ 0x18007FF9C (TpInitializePackage.c)
 *     LdrInitializeMrdata @ 0x1800AFA90 (LdrInitializeMrdata.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800B0A90 (RtlpInitializeNonVolatileFlush.c)
 *     RtlHpInitializeHeapManager @ 0x1800B1040 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800B1180 (RtlpInitializeLowFragHeapManager.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBA50 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800EFE50 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800F18B0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180104580 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010C184 (RtlpHeapTrkAllocCacheAligned.c)
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

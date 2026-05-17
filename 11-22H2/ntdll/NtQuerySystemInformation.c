/*
 * XREFs of NtQuerySystemInformation @ 0x18009F4B0
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800666F8 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSystemTimeToLocalTime @ 0x18007DEB0 (RtlSystemTimeToLocalTime.c)
 *     TpInitializePackage @ 0x18007F92C (TpInitializePackage.c)
 *     LdrInitializeMrdata @ 0x1800AD9C0 (LdrInitializeMrdata.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800AE9C0 (RtlpInitializeNonVolatileFlush.c)
 *     RtlHpInitializeHeapManager @ 0x1800AEF70 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800AF0B0 (RtlpInitializeLowFragHeapManager.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DC0A0 (LdrpLogIntegrityContinuityTelemetry.c)
 *     SendMessageToWERService @ 0x1800E775C (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800EEA40 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800F04A0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180103170 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010AD14 (RtlpHeapTrkAllocCacheAligned.c)
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

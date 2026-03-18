/*
 * XREFs of ZwQueryVirtualMemory @ 0x14041BBC0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x14036FD8C (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x140374FC8 (SepGetStackTraceHash.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x14056E34C (KiVerifyContextXStateCetUEnabled.c)
 *     RtlCheckXfgFailureInformation @ 0x1405EE7E0 (RtlCheckXfgFailureInformation.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405F7344 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405F7B94 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x1406734EC (LdrpResGetMappingSize.c)
 *     EtwpTiQueryVad @ 0x1406D98F8 (EtwpTiQueryVad.c)
 *     WbVerifyVirtualAddressSignature @ 0x1407E4008 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x1409AF728 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B16A8 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6BB0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7AD4 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E8614 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AA4550 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}

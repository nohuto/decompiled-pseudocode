/*
 * XREFs of ZwQueryVirtualMemory @ 0x14041B1C0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140362E88 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x14046010C (KiVerifyContextXStateCetUEnabled.c)
 *     RtlCheckXfgFailureInformation @ 0x1405B1A70 (RtlCheckXfgFailureInformation.c)
 *     SepGetStackTraceHash @ 0x1405B7C3C (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1778 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405C20CC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14075A008 (LdrpResGetMappingSize.c)
 *     sub_140763BF4 @ 0x140763BF4 (sub_140763BF4.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     EtwpTiQueryVad @ 0x1407E2720 (EtwpTiQueryVad.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1158 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B3B70 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E91F0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA688 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409EB1E8 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE02E0 (VfMiscMmUnmapLockedPages_Entry.c)
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

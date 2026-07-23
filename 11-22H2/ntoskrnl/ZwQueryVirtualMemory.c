/*
 * XREFs of ZwQueryVirtualMemory @ 0x14041AB00
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140362838 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x14045FAAC (KiVerifyContextXStateCetUEnabled.c)
 *     RtlCheckXfgFailureInformation @ 0x1405B1B00 (RtlCheckXfgFailureInformation.c)
 *     SepGetStackTraceHash @ 0x1405B7CCC (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1808 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405C215C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14075A518 (LdrpResGetMappingSize.c)
 *     sub_140764104 @ 0x140764104 (sub_140764104.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     EtwpTiQueryVad @ 0x1407E2CA0 (EtwpTiQueryVad.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1208 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B3C20 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E92A0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA738 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409EB298 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE12B0 (VfMiscMmUnmapLockedPages_Entry.c)
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
  return KiServiceInternal(ProcessHandle);
}

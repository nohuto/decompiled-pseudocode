/*
 * XREFs of ZwQueryVirtualMemory @ 0x14041B550
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140363028 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x14046050C (KiVerifyContextXStateCetUEnabled.c)
 *     RtlCheckXfgFailureInformation @ 0x1405B1FE0 (RtlCheckXfgFailureInformation.c)
 *     SepGetStackTraceHash @ 0x1405B81AC (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1CE8 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405C263C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14075A1F8 (LdrpResGetMappingSize.c)
 *     sub_140763DE4 @ 0x140763DE4 (sub_140763DE4.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     EtwpTiQueryVad @ 0x1407E29F0 (EtwpTiQueryVad.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1358 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B3D70 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E9480 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA918 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409EB478 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE02D0 (VfMiscMmUnmapLockedPages_Entry.c)
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

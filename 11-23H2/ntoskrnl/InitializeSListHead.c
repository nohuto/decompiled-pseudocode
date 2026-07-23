/*
 * XREFs of InitializeSListHead @ 0x140221420
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221054 (MiAbsorbPossibleEngineChanges.c)
 *     ExInitializeLookasideListExInternal @ 0x140222220 (ExInitializeLookasideListExInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344714 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140361A50 (ExInitializePagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x140363278 (RtlpHpVsContextInitialize.c)
 *     MiInitializePageFaultResources @ 0x140375A30 (MiInitializePageFaultResources.c)
 *     RtlpDynamicLookasideInitialize @ 0x140389E70 (RtlpDynamicLookasideInitialize.c)
 *     MiInitializeNuma @ 0x140397F38 (MiInitializeNuma.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A8AEC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C34B0 (ExInitializeNPagedLookasideListInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x14054279C (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B2ACC (MmInitializeProcessAddressSpace.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     WdipSemInitializeGlobalState @ 0x140832C4C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x140833D94 (MiCreatePagefile.c)
 *     MiInitializePartition @ 0x1408375A0 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140837E4C (MiInitializeSections.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140847464 (PfFbBufferListInitialize.c)
 *     EtwpEnableStackCaching @ 0x1408A8488 (EtwpEnableStackCaching.c)
 *     RtlStdInitializeStackDatabase @ 0x1409BA71C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1409DE1F0 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409F2820 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409F28B4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140A8B4A8 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140ACBA54 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140ADA138 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B43854 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}

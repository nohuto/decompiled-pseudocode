/*
 * XREFs of InitializeSListHead @ 0x140221420
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221054 (MiAbsorbPossibleEngineChanges.c)
 *     ExInitializeLookasideListExInternal @ 0x140222220 (ExInitializeLookasideListExInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344484 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1403618B0 (ExInitializePagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x1403630D8 (RtlpHpVsContextInitialize.c)
 *     MiInitializePageFaultResources @ 0x140375890 (MiInitializePageFaultResources.c)
 *     RtlpDynamicLookasideInitialize @ 0x140389C90 (RtlpDynamicLookasideInitialize.c)
 *     MiInitializeNuma @ 0x140397D58 (MiInitializeNuma.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A890C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C32D0 (ExInitializeNPagedLookasideListInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405420DC (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B2A9C (MmInitializeProcessAddressSpace.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     WdipSemInitializeGlobalState @ 0x14083294C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x140833A94 (MiCreatePagefile.c)
 *     MiInitializePartition @ 0x1408372A0 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140837B4C (MiInitializeSections.c)
 *     PfTInitialize @ 0x140846F2C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140847164 (PfFbBufferListInitialize.c)
 *     EtwpEnableStackCaching @ 0x1408A8238 (EtwpEnableStackCaching.c)
 *     RtlStdInitializeStackDatabase @ 0x1409BA51C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1409DDFF0 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F09FC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409F2590 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409F2624 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140A8B4A8 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140ACBA64 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140ADA148 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B43854 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  *SListHead = 0LL;
}

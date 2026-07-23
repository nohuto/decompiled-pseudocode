/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14027D190
 * Callers:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402E4F94 (MiIsPteDecommittedPage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF658 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF750 (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1402F2A98 (MiIsPteEvaluated.c)
 *     MiCheckProtoAccess @ 0x14034A148 (MiCheckProtoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C65B40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C65B40;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}

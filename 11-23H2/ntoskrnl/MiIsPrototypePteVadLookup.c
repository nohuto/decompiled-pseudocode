/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14027CF00
 * Callers:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140272A20 (MiGetPageProtection.c)
 *     MiCountSharedPages @ 0x140273910 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402E4D04 (MiIsPteDecommittedPage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1402F2808 (MiIsPteEvaluated.c)
 *     MiCheckProtoAccess @ 0x140349FB0 (MiCheckProtoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617C30 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
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

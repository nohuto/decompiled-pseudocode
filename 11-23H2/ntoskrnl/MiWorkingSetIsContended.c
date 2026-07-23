/*
 * XREFs of MiWorkingSetIsContended @ 0x1402E6C80
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1402E6814 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiSetGraphicsPtes @ 0x140626A30 (MiSetGraphicsPtes.c)
 *     MiInsertViewOfPhysicalSection @ 0x140631180 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631C44 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  _DWORD *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &unk_140C6A180;
  else
    v1 = (_DWORD *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}

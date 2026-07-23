/*
 * XREFs of MiVadPureReserve @ 0x140277E00
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiComputeVadCharges @ 0x140289CC8 (MiComputeVadCharges.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiReturnVadQuota @ 0x1406FB5A4 (MiReturnVadQuota.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC358 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
    return (v1 & 0x70) == 0 && *(int *)(a1 + 52) >= 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0xC00 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(*(_QWORD *)v3 + 64LL) )
    return 0LL;
  return (*(_DWORD *)(*(_QWORD *)v3 + 56LL) >> 12) & 1;
}

/*
 * XREFs of MiVadPureReserve @ 0x140277B70
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiComputeVadCharges @ 0x140289A38 (MiComputeVadCharges.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1406F9470 (MiCommitPageTablesForVad.c)
 *     MiReturnVadQuota @ 0x1406FB394 (MiReturnVadQuota.c)
 *     MiReturnPageTablePageCommitment @ 0x140764990 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC088 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
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

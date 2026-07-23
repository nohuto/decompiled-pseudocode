/*
 * XREFs of MiRestockOverCommit @ 0x140656B88
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDEF0 (MiCanBatchHardFaultPages.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16440);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 16440);
    *(_QWORD *)(a1 + 16440) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}

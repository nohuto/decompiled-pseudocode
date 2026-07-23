/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140348F44
 * Callers:
 *     MiReleaseWsSwapReservationPfn @ 0x14021B4A4 (MiReleaseWsSwapReservationPfn.c)
 *     MiLockPageTablePage @ 0x140237BD0 (MiLockPageTablePage.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiAbandonPrivatePfn @ 0x1402ED384 (MiAbandonPrivatePfn.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiWriteCompletePfn @ 0x1402F49E0 (MiWriteCompletePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MiStoreMarkLockedPagesModified @ 0x14046DD64 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    if ( a2 )
      *a1 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !a3 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}

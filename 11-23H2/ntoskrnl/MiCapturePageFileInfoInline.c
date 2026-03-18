/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140348CB4
 * Callers:
 *     MiReleaseWsSwapReservationPfn @ 0x14021B4A4 (MiReleaseWsSwapReservationPfn.c)
 *     MiLockPageTablePage @ 0x140237B00 (MiLockPageTablePage.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283100 (MiCaptureDirtyBitToPfn.c)
 *     MiReservePageFileSpaceForPage @ 0x140284E70 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     MiAbandonPrivatePfn @ 0x1402ED0F4 (MiAbandonPrivatePfn.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiWriteCompletePfn @ 0x1402F4750 (MiWriteCompletePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x14036A438 (MiPurgeImageSection.c)
 *     MiStoreMarkLockedPagesModified @ 0x14046D964 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
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

/*
 * XREFs of MiAddLockedPageCharge @ 0x1402EF5F8
 * Callers:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402EF020 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiRelockProtoPoolPage @ 0x1402EF4D4 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiDoubleLockMdlPage @ 0x1402F170C (MiDoubleLockMdlPage.c)
 *     MiMakeProtoAddressValid @ 0x1402F26E0 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiMirrorPerformBrownWrites @ 0x140627B78 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x14062F194 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EFC0 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x140644120 (MiDbgMarkPfnModified.c)
 *     MiBuildForkPageTable @ 0x140662464 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1406656E0 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1402CE220 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402DC5B0 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  _WORD *v2; // rbx
  __int64 v3; // rcx
  unsigned int locked; // r9d
  char v5; // r10

  v2 = (_WORD *)(a1 + 32);
  if ( (a2 & 1) == 0 && *v2 >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*v2;
  return locked;
}

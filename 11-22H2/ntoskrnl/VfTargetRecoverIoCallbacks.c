/*
 * XREFs of VfTargetRecoverIoCallbacks @ 0x1405CF294
 * Callers:
 *     VfSuspectRemoveDifVolatileVerification @ 0x140ADBC74 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfDifRecoverIoCallbacks @ 0x1405CED84 (VfDifRecoverIoCallbacks.c)
 */

void __fastcall VfTargetRecoverIoCallbacks(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( !VfSafeMode )
  {
    v1 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v2, a1, 1LL);
    if ( v1 )
      VfDifRecoverIoCallbacks(v1[6]);
  }
  VfAvlCleanupLockContext((__int64)&v2);
}

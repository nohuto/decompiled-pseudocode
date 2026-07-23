/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140ACB430
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADA2A8 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140ADAC94 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x1405CF87C (ViTargetDriversFreeVerifiedData.c)
 */

void VfTargetDriversDisableVerifier()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  void **v2; // rax
  void **v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v4, 0);
    v2 = (void **)VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v4, v1, (unsigned int)(v0 + 1));
    v3 = v2;
    if ( v2 )
    {
      ViTargetDriversFreeVerifiedData(v2[7]);
      v3[7] = 0LL;
      --dword_140C370A8;
    }
    VfAvlCleanupLockContext((__int64)&v4);
  }
}

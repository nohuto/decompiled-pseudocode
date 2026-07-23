/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x140AD2138
 * Callers:
 *     IovpCallDriver1 @ 0x140ACC190 (IovpCallDriver1.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 */

void VfDevObjMarkDeviceRemoved()
{
  unsigned __int64 v0; // r8
  volatile signed __int32 *v1; // rax
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)&v2, 1);
    v1 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v2, v0, 0LL);
    if ( v1 )
      _InterlockedOr(v1 + 4, 2u);
    VfAvlCleanupLockContext((__int64)&v2);
  }
}

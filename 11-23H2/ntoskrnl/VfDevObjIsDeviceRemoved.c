/*
 * XREFs of VfDevObjIsDeviceRemoved @ 0x140AD20C8
 * Callers:
 *     VfWmiVerifyIrpStackUpward @ 0x140AE7A90 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 */

char VfDevObjIsDeviceRemoved()
{
  bool v1; // bl
  unsigned __int64 v2; // r8
  _BYTE *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( (MmVerifierData & 0x10) == 0 )
    return 1;
  v1 = 1;
  VfAvlInitializeLockContext((__int64)&v4, 1);
  v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v4, v2, 0LL);
  if ( v3 )
    v1 = (v3[16] & 2) != 0;
  VfAvlCleanupLockContext((__int64)&v4);
  return v1;
}

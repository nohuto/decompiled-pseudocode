/*
 * XREFs of ViDevObjAdd @ 0x140A91A50
 * Callers:
 *     VerifierIoCreateDevice @ 0x140A915C0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1402D83B4 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v5 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 16) = 0;
      VfAvlInitializeLockContext((__int64)&v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)&v5, v3);
      VfAvlCleanupLockContext((__int64)&v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}

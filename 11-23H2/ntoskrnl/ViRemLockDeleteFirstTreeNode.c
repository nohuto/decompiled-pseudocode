/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140AD28EC
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140AC01B2 (VfRemLockDeleteMemoryRange.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2640 (VerifierIoInitializeRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x14020A720 (VfAvlDeleteTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14020A910 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v6, 0);
  v3 = (unsigned __int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViRemLockAvl, (__int64)&v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)&v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140D719D8 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}

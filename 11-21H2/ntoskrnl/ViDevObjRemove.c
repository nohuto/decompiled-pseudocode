/*
 * XREFs of ViDevObjRemove @ 0x140A91AD0
 * Callers:
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1402DB870 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v4, BugCheckParameter2, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, BugCheckParameter2, 0LL, 0LL);
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)&v4, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v4);
    if ( v2 )
    {
      if ( dword_140D58A58 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}

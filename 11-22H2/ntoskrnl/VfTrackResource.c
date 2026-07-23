/*
 * XREFs of VfTrackResource @ 0x140AE55E4
 * Callers:
 *     VfMiscExInitializeResourceLite_Exit @ 0x140AE0BF0 (VfMiscExInitializeResourceLite_Exit.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlReserveNode @ 0x14020A294 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14020A3CC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14020A930 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfTrackResource(__int64 BugCheckParameter2)
{
  char *v3; // rbp
  _SLIST_ENTRY *v4; // rdi
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( !ViResourceInitialized )
    return 0;
  v3 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
  if ( !v3 )
  {
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return 0;
  }
  v4 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 0);
  if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL) )
  {
    if ( !ViResourcesAlreadyLoadedDrivers )
      VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
    _InterlockedAdd(&ViResourceStaleNodes, 1u);
    v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL);
  }
  VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)&v5, v3);
  VfAvlCleanupLockContext((__int64)&v5);
  if ( v4 )
  {
    if ( dword_140D70760 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v4);
    else
      VfUtilFreePoolCheckIRQL(v4);
  }
  return 1;
}

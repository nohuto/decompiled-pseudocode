/*
 * XREFs of VfCheckForResource @ 0x140AE538C
 * Callers:
 *     ExpCheckForResource @ 0x14060ACC8 (ExpCheckForResource.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14020A930 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x1405D1C2C (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rbx
  _SLIST_ENTRY *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_140D70748 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)&v8, 1);
    v4 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v8, BugCheckParameter3, a2);
    v5 = v4;
    if ( v4 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v4, BugCheckParameter3, a2);
      v9 = *v5;
    }
    VfAvlCleanupLockContext((__int64)&v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)&v8, 0);
      v6 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)&v8, (unsigned __int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)&v8);
      if ( v6 )
      {
        if ( dword_140D70760 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v6);
        else
          VfUtilFreePoolCheckIRQL(v6);
      }
      return 0LL;
    }
  }
  return 1LL;
}

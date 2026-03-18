/*
 * XREFs of VfLookasideDelete @ 0x140AE238C
 * Callers:
 *     VfMiscExDeleteLookasideListEx_Entry @ 0x140ADFAC0 (VfMiscExDeleteLookasideListEx_Entry.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x14020A720 (VfAvlDeleteTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14020A910 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInitializeLockContext @ 0x1404664A8 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfLookasideDelete(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v3, 0);
    if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (VfRuleClasses & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v3);
    if ( v2 )
    {
      if ( dword_140D70788 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}

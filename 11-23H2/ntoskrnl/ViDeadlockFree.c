/*
 * XREFs of ViDeadlockFree @ 0x140AD92B0
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1828 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1988 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140AD6DDC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD7768 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD8E70 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViDeadlockFree(PVOID Entry, int a2)
{
  int v2; // edx
  int v3; // edx
  PVOID v4; // rdx
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Entry;
      v5 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = Entry;
      v5 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = Entry;
    v5 = &ViDeadlockResourceLookaside;
  }
  ExFreeToNPagedLookasideList(v5, v4);
}

/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x14022D190
 * Callers:
 *     CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040FBF8 (CcAllocateAndZeroSharedCacheMapRaiseOnError.c)
 *     CcAllocatePrivateCacheMap @ 0x14040FC30 (CcAllocatePrivateCacheMap.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1406DC350 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     VmAccessFault @ 0x1409DC1F0 (VmAccessFault.c)
 *     CmpAllocateKeyControlBlock @ 0x140A17C38 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return Lookaside->L.AllocateEx((unsigned int)Lookaside->L.Type, Lookaside->L.Size, Lookaside->L.Tag, Lookaside);
  }
  return result;
}

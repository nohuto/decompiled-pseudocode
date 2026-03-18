/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x14022D080
 * Callers:
 *     CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040FA18 (CcAllocateAndZeroSharedCacheMapRaiseOnError.c)
 *     CcAllocatePrivateCacheMap @ 0x14040FA50 (CcAllocatePrivateCacheMap.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1406DC320 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     VmAccessFault @ 0x1409DBFF0 (VmAccessFault.c)
 *     CmpAllocateKeyControlBlock @ 0x140A17988 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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

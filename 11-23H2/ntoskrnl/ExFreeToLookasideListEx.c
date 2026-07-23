/*
 * XREFs of ExFreeToLookasideListEx @ 0x14020B9E0
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14040FC4C (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14040FC70 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CmpFreeKeyControlBlock @ 0x140699D40 (CmpFreeKeyControlBlock.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     CmpBounceContextCleanup @ 0x1406DBDF4 (CmpBounceContextCleanup.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     VmAccessFault @ 0x1409DC1F0 (VmAccessFault.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToLookasideListEx(PLOOKASIDE_LIST_EX Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    Lookaside->L.FreeEx(Entry, Lookaside);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}

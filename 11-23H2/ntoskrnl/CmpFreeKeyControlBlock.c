/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140699D40
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x140699C14 (CmpCleanUpKCBCacheTable.c)
 *     CmpDecommisssionKcb @ 0x140699D14 (CmpDecommisssionKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCloneToUnbackedKcb @ 0x140A170B4 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A179F4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx

  _InterlockedDecrement64(&CmPerfCounters);
  if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
  v2 = *(void **)(BugCheckParameter2 + 200);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
  *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter2);
  _InterlockedDecrement64(qword_140D552D0);
}

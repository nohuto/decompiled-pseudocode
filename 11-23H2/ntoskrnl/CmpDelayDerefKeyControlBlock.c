/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1406D86D0
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067F518 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0F30 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D8540 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB000 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A198B8 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A242B4 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 */

_QWORD *__fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed __int64 v2; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  _QWORD *v6; // r10
  bool v7; // dl
  _QWORD *result; // rax
  _QWORD *v9; // rdx

  v2 = *(_QWORD *)BugCheckParameter2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_9:
    result = (_QWORD *)(BugCheckParameter2 + 224);
    if ( (_QWORD *)*result != result )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
    v9 = *(_QWORD **)(a2 + 8);
    if ( *v9 != a2 )
      __fastfail(3u);
    *result = a2;
    *(_QWORD *)(BugCheckParameter2 + 232) = v9;
    *v9 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  }
  else
  {
    while ( 1 )
    {
      v5 = v2 - 1;
      v6 = (_QWORD *)v2;
      v7 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1;
      result = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v2);
      v2 = (signed __int64)result;
      if ( result == v6 )
        break;
      if ( (unsigned __int64)result <= 1 )
        goto LABEL_9;
    }
    if ( (unsigned __int64)result < v5 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
    if ( v7 )
      return (_QWORD *)CmpDoQueueLateUnloadWorker(v4);
  }
  return result;
}

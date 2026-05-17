/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A2BC0
 * Callers:
 *     EtwpFreeRegistration @ 0x180030104 (EtwpFreeRegistration.c)
 *     RtlpHpVsContextFree @ 0x180036C50 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlDeleteResource @ 0x18005DC40 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x18005DF10 (RtlpFreeDebugInfo.c)
 *     RtlInterlockedPushEntrySList @ 0x18006E9D0 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x18010E1A0 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x180117ED0 (RtlpRegisterStackTrace.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18012F150 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)a1,
           (signed __int64)a2,
           v5 + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return v6;
}

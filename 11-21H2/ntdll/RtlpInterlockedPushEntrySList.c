/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A7D80
 * Callers:
 *     EtwpFreeRegistration @ 0x180006708 (EtwpFreeRegistration.c)
 *     RtlInterlockedPushEntrySList @ 0x180006C60 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpFreeDebugInfo @ 0x18001E3C0 (RtlpFreeDebugInfo.c)
 *     RtlDeleteResource @ 0x18001E420 (RtlDeleteResource.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x180117A64 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18012B180 (RtlFreeMemoryBlockLookaside.c)
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

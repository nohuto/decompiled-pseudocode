/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A4C80
 * Callers:
 *     EtwpFreeRegistration @ 0x18002FF34 (EtwpFreeRegistration.c)
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180047A68 (RtlpFreeUserBlock.c)
 *     RtlDeleteResource @ 0x18005AC40 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x18005AF10 (RtlpFreeDebugInfo.c)
 *     RtlInterlockedPushEntrySList @ 0x18006E9D0 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x18010F620 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x180119350 (RtlpRegisterStackTrace.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180119F20 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A724 (RtlpLowFragHeapFlushCaches.c)
 *     RtlFreeMemoryBlockLookaside @ 0x180131150 (RtlFreeMemoryBlockLookaside.c)
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

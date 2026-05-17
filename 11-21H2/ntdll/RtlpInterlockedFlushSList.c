/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1800A7DC0
 * Callers:
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlInterlockedFlushSList @ 0x180077170 (RtlInterlockedFlushSList.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpInterlockedFlushSList(__int128 *a1)
{
  __int128 v1; // rax
  signed __int64 v2; // rbx
  __int128 v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    LOWORD(v2) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, 0LL, v2, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  return BYTE8(v1) & 0xF0;
}

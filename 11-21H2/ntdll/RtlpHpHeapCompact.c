/*
 * XREFs of RtlpHpHeapCompact @ 0x180014D08
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18006C310 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x18007FC70 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x1800150D8 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18005F56C (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1800A7DC0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpVsContextFreeList @ 0x1801213B4 (RtlpHpVsContextFreeList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, int a2)
{
  int v2; // ebx
  int v4; // ecx
  unsigned int v5; // ebx

  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 220);
  v5 = a2 | v2 & 0x13000003;
  if ( v4 && v4 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v5 |= 1u;
  if ( RtlpInterlockedFlushSList(a1 + 768) )
    RtlpHpVsContextFreeList((PRTL_SRWLOCK)(a1 + 704));
  RtlpHpLfhContextCompact(a1 + 896, v5);
  RtlpHpSegContextCompact(a1 + 320, v5);
  RtlpHpSegContextCompact(a1 + 512, v5);
  return 0LL;
}

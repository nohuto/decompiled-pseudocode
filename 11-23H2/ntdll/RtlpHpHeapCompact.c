/*
 * XREFs of RtlpHpHeapCompact @ 0x18005FB70
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18005FAF0 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x18005FB10 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x18005FC08 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18005FD44 (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1800A4CC0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpVsContextFreeList @ 0x180124514 (RtlpHpVsContextFreeList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v5; // ecx
  unsigned int v6; // ebx

  v3 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 220);
  v6 = a2 | v3 & 0x13000003;
  if ( v5 && v5 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v6 |= 1u;
  if ( RtlpInterlockedFlushSList(a1 + 768, a2, a3) )
    RtlpHpVsContextFreeList((PRTL_SRWLOCK)(a1 + 704));
  RtlpHpLfhContextCompact(a1 + 896, v6);
  RtlpHpSegContextCompact(a1 + 320, v6);
  RtlpHpSegContextCompact(a1 + 512, v6);
  return 0LL;
}

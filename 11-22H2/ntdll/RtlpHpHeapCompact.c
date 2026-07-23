/*
 * XREFs of RtlpHpHeapCompact @ 0x18005A3A0
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18005A320 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x18005A340 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x18005A438 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18005A574 (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1800A2C00 (RtlpInterlockedFlushSList.c)
 *     RtlpHpVsContextFreeList @ 0x180123094 (RtlpHpVsContextFreeList.c)
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

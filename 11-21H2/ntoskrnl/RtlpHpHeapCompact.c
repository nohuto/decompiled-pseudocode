/*
 * XREFs of RtlpHpHeapCompact @ 0x14036DC90
 * Callers:
 *     ExpHpCompactSessionPools @ 0x1402A0EF8 (ExpHpCompactSessionPools.c)
 *     ExpHpCompactionRoutine @ 0x140363EF0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpLfhContextCompact @ 0x1403644A4 (RtlpHpLfhContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x14036DD30 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsContextFreeList @ 0x14036E0E4 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int v4; // ebx
  PSLIST_ENTRY v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 220);
  v4 = v1 & 0x13000003;
  if ( v3 && v3 == KeGetCurrentThread()[1].CurrentRunTime )
    v4 |= 1u;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  if ( v5 )
    RtlpHpVsContextFreeList(a1 + 704, v4, v5);
  RtlpHpLfhContextCompact(a1 + 896, v4, v6, v7);
  RtlpHpSegContextCompact(a1 + 320, v4);
  RtlpHpSegContextCompact(a1 + 512, v4);
  return 0LL;
}

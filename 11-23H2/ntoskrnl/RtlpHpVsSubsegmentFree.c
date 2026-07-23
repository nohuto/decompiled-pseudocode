/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x140356EEC
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x14024EEC0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1405B6BA0 (RtlpHpHeapDestroy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           *(_QWORD *)(a1 + 128) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}

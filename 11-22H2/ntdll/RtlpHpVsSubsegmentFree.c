/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x180067754
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036C50 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsContextFreeInternal @ 0x180122EE4 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           *(_QWORD *)(a1 + 128) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}

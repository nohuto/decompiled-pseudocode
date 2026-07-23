/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x180067738
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsContextFreeInternal @ 0x180124364 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           *(_QWORD *)(a1 + 128) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}

/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x180034954
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x180034660 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x18005FC08 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1801236FC (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlpHpTlLogMemStats @ 0x180119C7C (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  __int64 result; // rax

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    return RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  return result;
}

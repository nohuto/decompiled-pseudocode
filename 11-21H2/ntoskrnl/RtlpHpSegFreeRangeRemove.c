/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x14036E090
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x140350FA0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x14036DD30 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1403A5774 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  return result;
}

/*
 * XREFs of KiAccumulateProcessorCycleStats @ 0x14020E890
 * Callers:
 *     <none>
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8D4 (KiGetProcessorEfficiencyClass.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 */

__int64 __fastcall KiAccumulateProcessorCycleStats(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int FrequencyBucket; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // r11

  FrequencyBucket = PoGetFrequencyBucket(a1, a2, a3, a4);
  result = KiGetProcessorEfficiencyClass(a1, v6, v7, FrequencyBucket);
  *(_QWORD *)(a1 + 8 * ((unsigned __int8)result + 2 * v9) + 33408) += v10;
  return result;
}

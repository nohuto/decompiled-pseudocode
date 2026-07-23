/*
 * XREFs of KiEndDebugAccumulation @ 0x14020E5F0
 * Callers:
 *     KeThawExecution @ 0x14020D410 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8D4 (KiGetProcessorEfficiencyClass.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned int FrequencyBucket; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v11; // r10
  __int64 v12; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v5 = __rdtsc();
    v6 = v5 - *(_QWORD *)(a1 + 33152) + *(_QWORD *)(a1 + 33400);
    *(_QWORD *)(a1 + 33400) = v6;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      FrequencyBucket = PoGetFrequencyBucket(a1, v6, a3, a4);
      ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(a1, v8, v9, FrequencyBucket);
      *(_QWORD *)(a1 + 8 * (ProcessorEfficiencyClass + 2 * a4) + 33408) += v11;
    }
    *(_QWORD *)(a1 + 33152) = v5;
    v12 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v12 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v12, 0LL, a3, a4);
    *(_BYTE *)(a1 + 32) = 0;
  }
}

/*
 * XREFs of KiAccumulateCycleStats @ 0x14020E7C0
 * Callers:
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8D4 (KiGetProcessorEfficiencyClass.c)
 *     RtlTimelineBitmapUpdate @ 0x14020E900 (RtlTimelineBitmapUpdate.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 */

void __fastcall KiAccumulateCycleStats(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 FrequencyBucket; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ProcessorEfficiencyClass; // rsi
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  int v17; // eax

  v3 = *(_QWORD *)(a2 + 1608);
  if ( v3 )
  {
    FrequencyBucket = (unsigned int)PoGetFrequencyBucket(a1, a2, a3, v3);
    ProcessorEfficiencyClass = (unsigned __int8)KiGetProcessorEfficiencyClass(a1, v6, v7, v8);
    v10 = ProcessorEfficiencyClass + 2 * FrequencyBucket;
    v12 = (unsigned int)KiTimelineBitmapTime;
    *(_QWORD *)(v11 + 8 * v10) += v13;
    RtlTimelineBitmapUpdate(v11 + 192, v12);
    if ( !KiEfficiencyClassSystem )
    {
      v17 = (unsigned __int8)*(_DWORD *)(v15 + 512);
      if ( v17 == 2 || (unsigned int)(v17 - 5) <= 1 )
        *(_QWORD *)(v14 + 16 * FrequencyBucket + 8) += v16;
    }
    if ( *(_QWORD *)(v15 + 1552) )
    {
      *(_QWORD *)(v14 + 8 * (ProcessorEfficiencyClass + 2 * FrequencyBucket) + 128) += v16;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v15 + 1552) + 1608LL) + 8 * v10 + 64),
        v16);
    }
  }
}

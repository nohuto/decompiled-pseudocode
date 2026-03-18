/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x1402B2D40
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402392E0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x1402459F0 (KiRetireDpcList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BACF8 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiIdleSchedule @ 0x140307420 (KiIdleSchedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140329E48 (KeUpdateTotalCyclesCurrentThread.c)
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KiSelectIdleProcessor @ 0x1405776B4 (KiSelectIdleProcessor.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140249C20 (PoGetFrequencyBucket.c)
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginCounterAccumulation @ 0x1405740F0 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 FrequencyBucket; // r9
  bool v9; // zf
  __int64 v10; // r11
  char v11; // cl

  v3 = a3;
  v4 = a2;
  result = __rdtsc();
  v7 = result;
  FrequencyBucket = result - *(_QWORD *)(a1 + 33152) + *(_QWORD *)(a1 + 33400);
  *(_QWORD *)(a1 + 33400) = FrequencyBucket;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    FrequencyBucket = (unsigned int)PoGetFrequencyBucket(a1);
    if ( KeHeteroSystem )
      v11 = *(_BYTE *)(a1 + 34056);
    else
      v11 = *(_BYTE *)(a1 + 34059);
    result = 8LL;
    if ( !v11 )
      result = 0LL;
    *(_QWORD *)(result + 16 * (FrequencyBucket + 2088) + a1) += v10;
  }
  if ( (*(_BYTE *)(v4 + 2) & 0x40) != 0 )
  {
    result = *(_QWORD *)(v4 + 968);
    if ( result )
      *(_BYTE *)(result + 64) = 1;
  }
  *(_QWORD *)(a1 + 33152) = v7;
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL, a3, FrequencyBucket);
  v9 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v9 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !v3 )
      return HalRequestSoftwareInterrupt(2);
  }
  return result;
}

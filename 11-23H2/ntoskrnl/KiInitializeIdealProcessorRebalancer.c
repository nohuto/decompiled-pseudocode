/*
 * XREFs of KiInitializeIdealProcessorRebalancer @ 0x1403B48F8
 * Callers:
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 KiInitializeIdealProcessorRebalancer()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  memset(&KiIdealProcessorRebalancerContext, 0, 0xB8uLL);
  KiInitializeTimer2(
    (unsigned __int64)&KiIdealProcessorRebalancerContext,
    (__int64)KiIdealProcessorRebalancerTimerCallback,
    0LL,
    8);
  stru_140C41828.WorkerRoutine = (void (__fastcall *)(void *))KiIdealProcessorRebalancerWorker;
  result = (unsigned int)KiCacheAwareScheduling;
  stru_140C41828.Parameter = 0LL;
  stru_140C41828.List.Flink = 0LL;
  qword_140C41848 = 0LL;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    return KeSetTimer2((__int64)&KiIdealProcessorRebalancerContext, -10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}

/*
 * XREFs of RtlBackoff @ 0x1402FD2B0
 * Callers:
 *     KiRetireDpcList @ 0x1402459D0 (KiRetireDpcList.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     KiCheckForTimerExpiration @ 0x1402C8110 (KiCheckForTimerExpiration.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiSetDpcRequestFlag @ 0x140318724 (KiSetDpcRequestFlag.c)
 *     RtlReleaseSwapReference @ 0x14035CBF4 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14035CC9C (RtlAcquireSwapReference.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1404114F4 (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405B4BE0 (RtlpFcAddDelayedUsageReportToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}

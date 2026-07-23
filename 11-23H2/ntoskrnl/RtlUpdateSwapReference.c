/*
 * XREFs of RtlUpdateSwapReference @ 0x14080E3A8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x14080DF64 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x14080E2D8 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14028FEEC (PoCopyDeepIdleMask.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0540 (KeRemoveProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
 *     KiSubtractAffinityEx @ 0x14033DACC (KiSubtractAffinityEx.c)
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // zf
  void *v8; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v9[68]; // [rsp+40h] [rbp-C0h] BYREF

  result = memset(&v9[2], 0, 0x100uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    v9[0] = 2097153;
    memset(&v9[1], 0, 0x104uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v9);
    KiSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, (char *)v9, v9, HIWORD(v9[0]));
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v9, KeGetPcr()->Prcb.Number);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v9) )
      KeGenericProcessorCallback(v9, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 0);
    v6 = _InterlockedExchangeAdd64(a1 + 1, v5);
    v7 = v5 + v6 == 0;
    result = (void *)(v5 + v6);
    v8 = result;
    if ( !v7 )
    {
      do
      {
        ExBlockOnAddressPushLock(a1 + 2, (_QWORD *)a1 + 1, &v8, 8uLL, 0LL);
        result = (void *)*((_QWORD *)a1 + 1);
        v8 = result;
      }
      while ( result );
    }
  }
  return result;
}

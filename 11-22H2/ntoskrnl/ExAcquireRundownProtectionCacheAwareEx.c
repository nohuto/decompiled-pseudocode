/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20
 * Callers:
 *     EtwpOpenLogger @ 0x140227610 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x140321BDC (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FFD1C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140602670 (EtwpCompressionDpc.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409ECE10 (PeriodicCaptureStateTimerCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}

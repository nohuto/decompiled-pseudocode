/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140321E00
 * Callers:
 *     EtwpOpenLogger @ 0x1402275F0 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x140321DBC (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x1403664CC (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x140468A86 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FFC8C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140602600 (EtwpCompressionDpc.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECCC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409ECD60 (PeriodicCaptureStateTimerCallback.c)
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

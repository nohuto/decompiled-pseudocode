/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0
 * Callers:
 *     EtwpFailLogging @ 0x14022A6DC (EtwpFailLogging.c)
 *     EtwpTraceMessageVa @ 0x14022A8D0 (EtwpTraceMessageVa.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     RawEndOperation @ 0x1402D2B6C (RawEndOperation.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpCloseLogger @ 0x1403860B0 (EtwpCloseLogger.c)
 *     EtwpFailLoggingOld @ 0x14041A870 (EtwpFailLoggingOld.c)
 *     EtwTraceEvent @ 0x140460192 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x140630ACC (EtwTraceRaw.c)
 *     EtwpFinalizePendingApc @ 0x14063129C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x140631710 (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x140631A30 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140634F90 (EtwpCompressionProc.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpUpdateEnableMask @ 0x14079488C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x140796C40 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}

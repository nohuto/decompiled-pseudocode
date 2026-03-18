/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F10 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1402578E0 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F258 (EtwpCancelPendingStackWalkApcs.c)
 *     RawEndOperation @ 0x14032217C (RawEndOperation.c)
 *     EtwpFailLogging @ 0x1403664CC (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1403C2520 (EtwpCloseLogger.c)
 *     EtwTraceEvent @ 0x140468382 (EtwTraceEvent.c)
 *     EtwpFinalizePendingApc @ 0x140468894 (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x140468A86 (EtwpQueueStackWalkApc.c)
 *     EtwSendTraceBuffer @ 0x1405FF1A0 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FF338 (EtwTraceRaw.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FFC8C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405FFD80 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140602650 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE810 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECCC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFB90 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
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

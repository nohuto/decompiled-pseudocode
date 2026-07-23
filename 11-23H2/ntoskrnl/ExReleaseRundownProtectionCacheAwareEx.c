/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60
 * Callers:
 *     EtwpTraceMessageVa @ 0x140227020 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1402579A0 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F4E8 (EtwpCancelPendingStackWalkApcs.c)
 *     RawEndOperation @ 0x14032240C (RawEndOperation.c)
 *     EtwpFailLogging @ 0x14036666C (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1403C2700 (EtwpCloseLogger.c)
 *     EtwTraceEvent @ 0x140468782 (EtwTraceEvent.c)
 *     EtwpFinalizePendingApc @ 0x140468C94 (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x140468E86 (EtwpQueueStackWalkApc.c)
 *     EtwSendTraceBuffer @ 0x1405FF710 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FF8A8 (EtwTraceRaw.c)
 *     EtwpQueueStackWalkDpc @ 0x1406001FC (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1406002F0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140602BA0 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpUpdateEnableMask @ 0x1406BDCC4 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBC0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
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

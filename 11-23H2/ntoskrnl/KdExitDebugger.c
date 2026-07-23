/*
 * XREFs of KdExitDebugger @ 0x140AB0008
 * Callers:
 *     KdpReport @ 0x14030EB04 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403B20B0 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x14057F45C (KiTpWriteMemory.c)
 *     KdpSymbol @ 0x140AB0510 (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 *     KdpCreateRemoteFile @ 0x140AB0E04 (KdpCreateRemoteFile.c)
 *     KdSendTraceData @ 0x140AB19F8 (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140AB3A58 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140AB3CC0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140AB528C (KdpCommandString.c)
 *     KdpPrint @ 0x140AB5368 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB54E8 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140AB5B80 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeThawExecution @ 0x14020D410 (KeThawExecution.c)
 *     KeRestoreSupervisorState @ 0x14020E4F0 (KeRestoreSupervisorState.c)
 *     KeInsertQueueDpc @ 0x140254830 (KeInsertQueueDpc.c)
 *     ExQueueDebuggerWorker @ 0x140293BCC (ExQueueDebuggerWorker.c)
 *     VfIsVerifierEnabled @ 0x140293C10 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2140 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_140C01CC8[0]();
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140C64A60);
    qword_140C64A60 = 0LL;
  }
  KeThawExecution(a1);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}

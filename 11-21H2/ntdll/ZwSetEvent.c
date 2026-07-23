/*
 * XREFs of ZwSetEvent @ 0x1800A4230
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpSwitchBuffer @ 0x180005964 (EtwpSwitchBuffer.c)
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 *     RtlpTpTimerRundown @ 0x180070B70 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180070BD4 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180070D10 (RtlpTpTimerQueueRundown.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     LdrpInitializationComplete @ 0x18007B3A4 (LdrpInitializationComplete.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180080FDC (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpWnfMetaCallbackProc @ 0x18008CDA0 (RtlpWnfMetaCallbackProc.c)
 *     EtwpSynchronizeWithLogger @ 0x180090FC8 (EtwpSynchronizeWithLogger.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlpUnWaitCriticalSection @ 0x1800F3F60 (RtlpUnWaitCriticalSection.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010B4F4 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x18010EF90 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

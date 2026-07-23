/*
 * XREFs of ZwSetEvent @ 0x1800A1070
 * Callers:
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpTpTimerRundown @ 0x18004F84C (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x18004FB6C (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180051E40 (RtlpTpTimerQueueRundown.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     EtwpSwitchBuffer @ 0x18005A86C (EtwpSwitchBuffer.c)
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18005F3A4 (EtwpSynchronizeWithLogger.c)
 *     RtlpFlushHeap @ 0x1800600BC (RtlpFlushHeap.c)
 *     LdrpInitializationComplete @ 0x1800746D0 (LdrpInitializationComplete.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007D2E4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlpWnfMetaCallbackProc @ 0x180088B70 (RtlpWnfMetaCallbackProc.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlpUnWaitCriticalSection @ 0x1800F50B0 (RtlpUnWaitCriticalSection.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x180101168 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010CB34 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180110640 (RtlpRtlpCtSelfSubscribeCallback.c)
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

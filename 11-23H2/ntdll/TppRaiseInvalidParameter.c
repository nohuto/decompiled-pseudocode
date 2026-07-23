/*
 * XREFs of TppRaiseInvalidParameter @ 0x180127248
 * Callers:
 *     TpAllocTimer @ 0x18002E6A0 (TpAllocTimer.c)
 *     TppCancelWait @ 0x180030648 (TppCancelWait.c)
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     TppWaitpValidateWait @ 0x180031A7C (TppWaitpValidateWait.c)
 *     TpSimpleTryPost @ 0x180032F00 (TpSimpleTryPost.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     TpStartAsyncIoOperation @ 0x180034B80 (TpStartAsyncIoOperation.c)
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18004B740 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TppIopValidateIo @ 0x18004BB64 (TppIopValidateIo.c)
 *     TpAllocPool @ 0x18004BC30 (TpAllocPool.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     TpAllocIoCompletion @ 0x18004BD00 (TpAllocIoCompletion.c)
 *     TpAllocWait @ 0x18004D980 (TpAllocWait.c)
 *     TppWorkpValidateWork @ 0x18004E620 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     TpCallbackIndependent @ 0x18004F1A0 (TpCallbackIndependent.c)
 *     TppCallbackMayRunLongProlog @ 0x18004F748 (TppCallbackMayRunLongProlog.c)
 *     TpDereferenceGlobalPool @ 0x1800500FC (TpDereferenceGlobalPool.c)
 *     TppAlpcpValidateAlpc @ 0x1800507F8 (TppAlpcpValidateAlpc.c)
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180050D24 (TppJobpValidateJob.c)
 *     TpAlpcUnregisterCompletionList @ 0x180052520 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180052560 (TpAlpcRegisterCompletionList.c)
 *     TpAllocWork @ 0x180060F60 (TpAllocWork.c)
 *     TpReleaseCleanupGroupMembers @ 0x180067D10 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B3B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpSetPoolMaxThreads @ 0x180080F40 (TpSetPoolMaxThreads.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800819F0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x180081AB0 (TpAllocCleanupGroup.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082CD0 (TpCallbackSendPendingAlpcMessage.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083F40 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpDisassociateCallback @ 0x180085250 (TpDisassociateCallback.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180085B80 (TpSetPoolMinThreads.c)
 *     TpReleaseCleanupGroup @ 0x180085F50 (TpReleaseCleanupGroup.c)
 *     TpCallbackSetEventOnCompletion @ 0x180088CA0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008CE60 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180126F80 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180126FB0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180126FF0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     TppReportExceptionFilter @ 0x1801272C8 (TppReportExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}

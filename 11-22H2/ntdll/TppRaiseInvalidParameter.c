/*
 * XREFs of TppRaiseInvalidParameter @ 0x180125DC8
 * Callers:
 *     TpAllocTimer @ 0x18002E870 (TpAllocTimer.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     TppTimerQueueExpiration @ 0x180031510 (TppTimerQueueExpiration.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     TpSimpleTryPost @ 0x180033060 (TpSimpleTryPost.c)
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 *     TpStartAsyncIoOperation @ 0x180034CE0 (TpStartAsyncIoOperation.c)
 *     TpPostWork @ 0x180034D80 (TpPostWork.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18004B8A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TppIopValidateIo @ 0x18004BCC4 (TppIopValidateIo.c)
 *     TpAllocPool @ 0x18004BD90 (TpAllocPool.c)
 *     TpBindFileToDirect @ 0x18004BDD4 (TpBindFileToDirect.c)
 *     TpAllocIoCompletion @ 0x18004BE60 (TpAllocIoCompletion.c)
 *     TpAllocWait @ 0x18004DAE0 (TpAllocWait.c)
 *     TppWorkpValidateWork @ 0x18004E780 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18004F040 (TppCleanupGroupMemberRelease.c)
 *     TpCallbackIndependent @ 0x18004F300 (TpCallbackIndependent.c)
 *     TppCallbackMayRunLongProlog @ 0x18004F8A8 (TppCallbackMayRunLongProlog.c)
 *     TpDereferenceGlobalPool @ 0x18005025C (TpDereferenceGlobalPool.c)
 *     TppAlpcpValidateAlpc @ 0x180050958 (TppAlpcpValidateAlpc.c)
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180050E84 (TppJobpValidateJob.c)
 *     TpAlpcUnregisterCompletionList @ 0x180052680 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x1800526C0 (TpAlpcRegisterCompletionList.c)
 *     TpAllocWork @ 0x18005B790 (TpAllocWork.c)
 *     TpReleaseCleanupGroupMembers @ 0x180067D30 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B3D0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpSetPoolMaxThreads @ 0x1800808D0 (TpSetPoolMaxThreads.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180081380 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x180081440 (TpAllocCleanupGroup.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082660 (TpCallbackSendPendingAlpcMessage.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083740 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpDisassociateCallback @ 0x180084A50 (TpDisassociateCallback.c)
 *     TpReleasePool @ 0x180084E80 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180085380 (TpSetPoolMinThreads.c)
 *     TpReleaseCleanupGroup @ 0x180085750 (TpReleaseCleanupGroup.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800884A0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008C660 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180125B00 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180125B30 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180125B70 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     TppReportExceptionFilter @ 0x180125E48 (TppReportExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}

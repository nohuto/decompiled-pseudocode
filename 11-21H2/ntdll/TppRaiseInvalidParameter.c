/*
 * XREFs of TppRaiseInvalidParameter @ 0x180124388
 * Callers:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppIopValidateIo @ 0x18001B7FC (TppIopValidateIo.c)
 *     TpSimpleTryPost @ 0x18001CC80 (TpSimpleTryPost.c)
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TpAllocWork @ 0x18001F6F0 (TpAllocWork.c)
 *     TpAllocTimer @ 0x18001F8B0 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18001F9C0 (TpAllocWait.c)
 *     TppWorkpValidateWork @ 0x180020290 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     TpCallbackIndependent @ 0x180069CF0 (TpCallbackIndependent.c)
 *     TpReleaseCleanupGroupMembers @ 0x18006B800 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006D2B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x180071288 (TpDereferenceGlobalPool.c)
 *     TppCallbackMayRunLongProlog @ 0x180071348 (TppCallbackMayRunLongProlog.c)
 *     TpSetPoolMaxThreads @ 0x180074550 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800745D0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180074630 (TpAllocPool.c)
 *     TpAllocIoCompletion @ 0x18007D500 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x18007D6F8 (TpBindFileToDirect.c)
 *     TpAlpcRegisterCompletionList @ 0x1800812B0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800813A0 (TpAlpcUnregisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x180081508 (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180084D90 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180085D0C (TppJobpValidateJob.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 *     TpAllocCleanupGroup @ 0x180087170 (TpAllocCleanupGroup.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180087980 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpDisassociateCallback @ 0x180088140 (TpDisassociateCallback.c)
 *     TpSetPoolMinThreads @ 0x180089830 (TpSetPoolMinThreads.c)
 *     TpReleaseCleanupGroup @ 0x1800898C0 (TpReleaseCleanupGroup.c)
 *     TpCallbackSetEventOnCompletion @ 0x18008A800 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008E1B0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800900D0 (TpCallbackSendPendingAlpcMessage.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1801240C0 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1801240F0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180124130 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     TppReportExceptionFilter @ 0x180124408 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}

/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14032D5B0
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848C30 (SleepstudyHelperCreateLibrary.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x14084C600 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C87C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x14084CA08 (SshpAlpcProcessMessage.c)
 *     SshpSessionManagerControlSessionCallback @ 0x14085B4D0 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B500 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408743E8 (SshpSessionManagerSendControlEvent.c)
 *     SshpSendSessionData @ 0x14087846C (SshpSendSessionData.c)
 *     SshpFreeDataEntry @ 0x1409A1908 (SshpFreeDataEntry.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1ED0 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A2090 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A2704 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}

/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14032D320
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A80C0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848930 (SleepstudyHelperCreateLibrary.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x14084C300 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C57C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x14084C708 (SshpAlpcProcessMessage.c)
 *     SshpSessionManagerControlSessionCallback @ 0x14085B290 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408741A8 (SshpSessionManagerSendControlEvent.c)
 *     SshpSendSessionData @ 0x14087822C (SshpSendSessionData.c)
 *     SshpFreeDataEntry @ 0x1409A1708 (SshpFreeDataEntry.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1CD0 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A1E90 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A2504 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}

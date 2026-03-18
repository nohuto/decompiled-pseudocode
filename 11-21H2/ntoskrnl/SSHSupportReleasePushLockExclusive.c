/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14036C0A0
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407F1400 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x140809BEC (SshpSendSessionData.c)
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14081AFCC (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x14081B144 (SshpAlpcProcessMessage.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x14081B2F0 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpSessionManagerControlSessionCallback @ 0x14081BF30 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SleepstudyHelperCreateLibrary @ 0x140853600 (SleepstudyHelperCreateLibrary.c)
 *     SshpFreeDataEntry @ 0x1409A0CF0 (SshpFreeDataEntry.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A0FD0 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A1190 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A1604 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SSHSupportReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v5; // edx
  int v6; // r8d
  __int64 result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v5 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v5;
    p_Process += 96LL;
    if ( v5 >= 6 )
      goto LABEL_16;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v6 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    result = *(unsigned __int8 *)(p_Process + 16);
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v6 )
      return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, BugCheckParameter2, v6);
    return result;
  }
LABEL_16:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
  _enable();
  return result;
}

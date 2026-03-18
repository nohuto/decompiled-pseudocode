/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1407A6FFC
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1407A6F10 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085537C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408554C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  PopAcquirePowerRequestPushLock(1);
  v2 = 0;
  if ( byte_140C3DA34 && byte_140C3F4E3 != a1 )
  {
    byte_140C3F4E3 = a1;
    if ( a1 )
    {
      qword_140C3F4E8 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140C3F4E8 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  if ( qword_140C6AF50 )
  {
    LOBYTE(v3) = a1;
    return (unsigned int)qword_140C6AF50(v3);
  }
  return v2;
}

/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1407A71EC
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1407A7100 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085567C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  PopAcquirePowerRequestPushLock(1);
  v2 = 0;
  if ( byte_140C3DA14 && byte_140C3F363 != a1 )
  {
    byte_140C3F363 = a1;
    if ( a1 )
    {
      qword_140C3F368 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140C3F368 = 0LL;
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

/*
 * XREFs of LdrForkMrdata @ 0x1800E1F70
 * Callers:
 *     RtlCompleteProcessCloning @ 0x1800A2E60 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  }
}

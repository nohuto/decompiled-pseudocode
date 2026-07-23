/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14054EED0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403AA280 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14054EBBC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14054EBF0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14054EC4C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054ECEC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14054F02C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140700FC0 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}

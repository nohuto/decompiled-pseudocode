/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14054E810
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403AA0A0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14054E4FC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14054E530 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14054E58C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054E62C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14054E96C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140700DB0 (PsTerminateSystemThread.c)
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

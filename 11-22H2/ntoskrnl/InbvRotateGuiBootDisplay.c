/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14054E8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403A99B0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14054E59C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14054E5D0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14054E62C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054E6CC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14054EA0C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140700E60 (PsTerminateSystemThread.c)
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

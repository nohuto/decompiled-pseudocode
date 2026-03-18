/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x140550E80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403D82CC (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x140550B6C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x140550BA0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x140550BFC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140550C9C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x140550FDC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
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

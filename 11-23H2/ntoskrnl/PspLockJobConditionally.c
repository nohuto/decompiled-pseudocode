/*
 * XREFs of PspLockJobConditionally @ 0x1406A30D0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspSendProcessNotificationToJobChain @ 0x14069F410 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1407D836C (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1409B31F4 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}

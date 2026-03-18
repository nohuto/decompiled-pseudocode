/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1407D8778
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140687E3C (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControl @ 0x1407D809C (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1407D866C (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409B2AB4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 *     IoStopDiskIoAttributionForContext @ 0x1403625C8 (IoStopDiskIoAttributionForContext.c)
 *     IoStopIoRateControl @ 0x1403628F0 (IoStopIoRateControl.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (struct _EX_RUNDOWN_REF *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}

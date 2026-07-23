/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1407D8A48
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140687E3C (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControl @ 0x1407D836C (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x1407D893C (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409B2CB4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     IoStopDiskIoAttributionForContext @ 0x140362768 (IoStopDiskIoAttributionForContext.c)
 *     IoStopIoRateControl @ 0x140362A90 (IoStopIoRateControl.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}

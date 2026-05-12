/*
 * XREFs of RiDisableDeviceQueueFastPath @ 0x1C0019640
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaidCreateUnit @ 0x1C0018888 (RaidCreateUnit.c)
 *     RaidNormalizeDeviceQueue @ 0x1C00195C4 (RaidNormalizeDeviceQueue.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001D0FC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidRemoveIoQueue @ 0x1C0021C14 (RaidRemoveIoQueue.c)
 *     RaidBusyDeviceQueue @ 0x1C004011C (RaidBusyDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C00401A8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidLockDeviceQueue @ 0x1C0040380 (RaidLockDeviceQueue.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C004039C (RaidLunQueueCheckWaitTimeout.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C00405F4 (RaidLunQueueWaitForQuiescence.c)
 *     RaidPauseDeviceQueue @ 0x1C004071C (RaidPauseDeviceQueue.c)
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RiDisableDeviceQueueFastPath(struct _EX_RUNDOWN_REF *a1)
{
  signed __int64 Count; // rdi
  bool v3; // zf
  signed __int64 v4; // rax

  Count = a1[11].Count;
  if ( (Count & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease(a1 + 10);
    ExRundownCompleted(a1 + 10);
    do
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 1, Count);
      v3 = Count == v4;
      Count = v4;
    }
    while ( !v3 && (v4 & 1) == 0 );
  }
}

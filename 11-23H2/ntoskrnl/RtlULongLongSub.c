/*
 * XREFs of RtlULongLongSub @ 0x140310CA8
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x140310BDC (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A6FC (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x140551D68 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405530B8 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F312C (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A5F54 (RtlCalculateUserShadowStackSizes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}

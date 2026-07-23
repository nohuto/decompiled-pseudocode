/*
 * XREFs of RtlULongLongSub @ 0x140310F38
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x140310E6C (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A8DC (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x140552428 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x140553778 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F315C (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A61A4 (RtlCalculateUserShadowStackSizes.c)
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

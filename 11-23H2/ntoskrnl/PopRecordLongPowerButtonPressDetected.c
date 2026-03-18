/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x14085E520
 * Callers:
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1409908D8 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x14036F1D8 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x1407A6550 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1, char a2)
{
  if ( a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(14, (__int64)&PopBsdPhysicalPowerButtonInfo, 64);
  RtlSetSystemBootStatus(16, (__int64)&PopBsdPowerTransitionExtension, 32);
  PopReleaseRwLock(&PopBsdUpdateLock);
}

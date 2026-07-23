/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140802DEC
 * Callers:
 *     PoClearTransitionMarker @ 0x1408030CC (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140990988 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x14036EB88 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x1407A6A60 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1, char a2)
{
  if ( a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x40u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, &PopBsdPowerTransitionExtension, 0x20u, 0LL);
  PopReleaseRwLock(&PopBsdUpdateLock);
}

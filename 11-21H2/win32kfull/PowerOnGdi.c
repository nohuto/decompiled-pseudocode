/*
 * XREFs of PowerOnGdi @ 0x1C0154D30
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ProcessDelayedSdc @ 0x1C0154E10 (ProcessDelayedSdc.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154E50 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PowerOnGdi(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL)) )
  {
    DrvDxgkLogCodePointPacket(11LL, 0LL, gulDelayedSwitchAction, 0LL);
    EtwTracePowerOnGdiBegin(a3);
    gbGDIOn = 1;
    SafeEnableMDEV(2LL);
    DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL);
    xxxUserResetDisplayDevice(v7, v6);
    if ( a2 )
      ProcessDelayedSdc(a1);
  }
  TransitionCursorSuppressionState(2u, 0);
  return EtwTracePowerOnGdiEnd(a3);
}

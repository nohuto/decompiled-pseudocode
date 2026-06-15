/*
 * XREFs of ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x18003A320
 * Callers:
 *     _lambda_cfcdbaebea1f2eb4988ff3c301ffbdc7_::operator() @ 0x180034B28 (_lambda_cfcdbaebea1f2eb4988ff3c301ffbdc7_--operator().c)
 *     _lambda_f89467a453fb6f478a02f7a30062da1c_::operator() @ 0x180034BD4 (_lambda_f89467a453fb6f478a02f7a30062da1c_--operator().c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180039180 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039D48 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall TsSessionRequiresReevaluationOfAudioInStandby(const struct TSSession *a1)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 253) || g_bLowPowerEpoch || !*((_DWORD *)a1 + 254) || g_bApmSuspended )
    return 1;
  return result;
}

/*
 * XREFs of ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180039670
 * Callers:
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--operator().c)
 *     _lambda_e1820d83b8f95df3942edf6c97432ab5_::operator() @ 0x1800348DC (_lambda_e1820d83b8f95df3942edf6c97432ab5_--operator().c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800384D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039098 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
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

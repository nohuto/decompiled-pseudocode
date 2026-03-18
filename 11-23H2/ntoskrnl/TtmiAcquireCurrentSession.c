/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1409A4930
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2560 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2860 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A2920 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1409A4ADC (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A67CC (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FA00 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1409A4F30 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A8344 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1758LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}

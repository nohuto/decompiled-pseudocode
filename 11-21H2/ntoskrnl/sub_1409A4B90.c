/*
 * XREFs of sub_1409A4B90 @ 0x1409A4B90
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     sub_1409A4DA8 @ 0x1409A4DA8 (sub_1409A4DA8.c)
 *     sub_1409A6AB0 @ 0x1409A6AB0 (sub_1409A6AB0.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A4B90(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    sub_1409A8628("TtmiAcquireCurrentSession", 1758LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)sub_1409A5200(a1, ProcessSessionId);
  }
  return v3;
}

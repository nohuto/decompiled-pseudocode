/*
 * XREFs of TtmpExitProximity @ 0x1409AB884
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1409AB498 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1409AB54C (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A4AA4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x1409A849C (TtmiLogExitProximity.c)
 */

void __fastcall TtmpExitProximity(__int64 a1, _DWORD *a2, char a3)
{
  int v3; // eax
  int v6; // ecx

  v3 = a2[9];
  if ( (v3 & 8) != 0 )
  {
    v6 = a2[67];
    a2[9] = v3 & 0xFFFFFFB7 | 0x40;
    TtmiLogExitProximity(v6, a2[68], a3);
    a2[9] |= 4u;
    TtmiScheduleSessionWorker(a1, 2);
  }
}

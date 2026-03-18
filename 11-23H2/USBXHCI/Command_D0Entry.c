/*
 * XREFs of Command_D0Entry @ 0x1C00148C8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00141F4 (WPP_RECORDER_SF_qd.c)
 *     Command_Initialize @ 0x1C001438C (Command_Initialize.c)
 */

__int64 __fastcall Command_D0Entry(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 16),
      a2,
      7,
      16,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      a1,
      v6);
  }
  Command_Initialize(a1, a2, a3, a4);
  return 0LL;
}

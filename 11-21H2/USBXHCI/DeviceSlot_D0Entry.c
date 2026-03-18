/*
 * XREFs of DeviceSlot_D0Entry @ 0x1C00148BC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     DeviceSlot_Initialize @ 0x1C0014604 (DeviceSlot_Initialize.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall DeviceSlot_D0Entry(__int64 a1, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids,
      a1,
      a2);
  return DeviceSlot_Initialize(a1);
}

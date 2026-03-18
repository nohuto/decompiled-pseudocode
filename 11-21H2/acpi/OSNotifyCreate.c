/*
 * XREFs of OSNotifyCreate @ 0x1C0009DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateDevice @ 0x1C0009C54 (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C0009F30 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreatePowerResource @ 0x1C002A294 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateThermalZone @ 0x1C002D154 (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  KIRQL v4; // si
  char Device; // al
  char v6; // bl
  int v7; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2, 0LL);
      goto LABEL_4;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
LABEL_4:
      v6 = Device;
      goto LABEL_5;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_4;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_4;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1);
  v6 = 0;
LABEL_5:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C00819A0 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_1C00819A4 = 0;
    WPP_RECORDER_SF_qsL(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      6,
      11,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a2,
      (__int64)&dword_1C00819A0,
      v6);
  }
  return 0LL;
}

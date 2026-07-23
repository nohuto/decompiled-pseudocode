/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140933BA4
 * Callers:
 *     HalpQueryAcpiRealTimeClock @ 0x140933008 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140933118 (HalpSetAcpiRealTimeClock.c)
 *     HalpArmAcpiWakeAlarm @ 0x140935040 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1409351DC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID v5; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
  v5 = HalpDynamicDevices;
  if ( HalpDynamicDevices )
  {
    ObfReferenceObject(HalpDynamicDevices);
    *a2 = v5;
  }
  else
  {
    v2 = -1073741275;
  }
  KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  return v2;
}

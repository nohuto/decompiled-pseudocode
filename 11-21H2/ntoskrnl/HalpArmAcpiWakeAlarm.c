/*
 * XREFs of HalpArmAcpiWakeAlarm @ 0x140806330
 * Callers:
 *     HaliSetWakeAlarm @ 0x140A523B0 (HaliSetWakeAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     HalpGetDynamicDevicePointer @ 0x14080637C (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x14090A480 (HalpCallWakeAlarmDriver.c)
 */

__int64 HalpArmAcpiWakeAlarm()
{
  struct _DEVICE_OBJECT *DynamicDevicePointer; // rax
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v2; // rdi

  DynamicDevicePointer = (struct _DEVICE_OBJECT *)HalpGetDynamicDevicePointer();
  v1 = 0;
  v2 = DynamicDevicePointer;
  if ( !DynamicDevicePointer )
    return 3221225473LL;
  if ( (int)HalpCallWakeAlarmDriver(DynamicDevicePointer) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0
    || (int)HalpCallWakeAlarmDriver(v2) < 0 )
  {
    v1 = -1073741823;
  }
  ObfDereferenceObject(v2);
  return v1;
}

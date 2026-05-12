/*
 * XREFs of sub_1C003AA4C @ 0x1C003AA4C
 * Callers:
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

NTSTATUS __fastcall sub_1C003AA4C(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *v6; // rbx
  NTSTATUS DeviceProperty; // edi
  ULONG BufferLength; // [rsp+58h] [rbp+20h] BYREF

  BufferLength = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, &BufferLength);
  if ( result == -1073741789 )
  {
    v6 = (void *)sub_1C0007CF4(64LL, BufferLength, 1413833042LL, (__int64)DeviceObject);
    if ( v6 )
    {
      DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v6, &BufferLength);
      if ( DeviceProperty < 0 )
        ExFreePoolWithTag(v6, 0x54456152u);
      else
        *a3 = v6;
      return DeviceProperty;
    }
    else
    {
      return -1073741801;
    }
  }
  else if ( result >= 0 )
  {
    return -1073741823;
  }
  return result;
}

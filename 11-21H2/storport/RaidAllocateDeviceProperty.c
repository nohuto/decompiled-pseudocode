/*
 * XREFs of RaidAllocateDeviceProperty @ 0x1C0038EB8
 * Callers:
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

NTSTATUS __fastcall RaidAllocateDeviceProperty(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *Pool; // rbx
  NTSTATUS DeviceProperty; // edi
  ULONG BufferLength; // [rsp+58h] [rbp+20h] BYREF

  BufferLength = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, &BufferLength);
  if ( result == -1073741789 )
  {
    Pool = (void *)RaidAllocatePool(64LL, BufferLength, 1413833042LL, (__int64)DeviceObject);
    if ( Pool )
    {
      DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, Pool, &BufferLength);
      if ( DeviceProperty < 0 )
        ExFreePoolWithTag(Pool, 0x54456152u);
      else
        *a3 = Pool;
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

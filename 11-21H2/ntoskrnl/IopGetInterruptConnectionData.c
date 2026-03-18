/*
 * XREFs of IopGetInterruptConnectionData @ 0x140817A24
 * Callers:
 *     IopConnectLineBasedInterrupt @ 0x140816798 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140816C88 (IopConnectMessageBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140816FD0 (IoConnectInterruptEx.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IopGetInterruptConnectionData(PDEVICE_OBJECT Pdo, _QWORD *a2)
{
  NTSTATUS result; // eax
  _DWORD *Data; // rbx
  NTSTATUS DevicePropertyData; // edi
  ULONG RequiredSize; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  RequiredSize = 0;
  Type = 0;
  result = IoGetDevicePropertyData(Pdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0, 0LL, &RequiredSize, &Type);
  if ( result == -1073741789 && RequiredSize >= 0x60 )
  {
    Data = (_DWORD *)ExAllocatePool2(64LL, RequiredSize, 1869181008LL);
    if ( !Data )
      return -1073741670;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &INTERRUPT_CONNECTION_DATA_PKEY,
                           0,
                           0,
                           RequiredSize,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( RequiredSize >= 88 * *Data + 8 )
      {
        *a2 = Data;
        return DevicePropertyData;
      }
      DevicePropertyData = -1073741762;
    }
    ExFreePoolWithTag(Data, 0);
    return DevicePropertyData;
  }
  return result;
}

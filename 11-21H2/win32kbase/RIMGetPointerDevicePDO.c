/*
 * XREFs of RIMGetPointerDevicePDO @ 0x1C00A1C34
 * Callers:
 *     RIMGetMouseDeviceHardwareId @ 0x1C00A0FE0 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00A196C (RIMRegOpenDeviceInstanceKey.c)
 *     RIMGetPanelId @ 0x1C00A1AB8 (RIMGetPanelId.c)
 *     RIMIsHIDMouse @ 0x1C00A1B80 (RIMIsHIDMouse.c)
 *     rimIsCrossSessionDevice @ 0x1C017D478 (rimIsCrossSessionDevice.c)
 *     RIMGetContainerId @ 0x1C0192030 (RIMGetContainerId.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2, __int64 a3)
{
  PIRP v5; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS Status; // ebx
  __int64 v10; // r8
  _QWORD *Information; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( !DeviceObject )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DeviceObject, a2, a3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 7;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v5->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_QWORD *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
      if ( *(_DWORD *)Information != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
      *a2 = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}

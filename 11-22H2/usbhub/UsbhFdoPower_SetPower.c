/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C001F580
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoDevicePowerState @ 0x1C000AE40 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003C7C0 (UsbhPoStartNextPowerIrp_Fdo.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  void *DeviceExtension; // rdi
  __int64 v6; // rcx
  void *v7; // rax
  _IO_STACK_LOCATION *v8; // r8
  __int64 Options; // r11
  __int64 v10; // rdx
  unsigned int v11; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_21;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1952805712;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = Irp;
  }
  v7 = DeviceObject->DeviceExtension;
  if ( !v7 )
LABEL_21:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v10 = *((_QWORD *)v7 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
      *(_DWORD *)v10 = 860770128;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = v8;
      *(_QWORD *)(v10 + 24) = Irp;
    }
    *((_QWORD *)v7 + Options + 105) = Irp;
    *((_QWORD *)v7 + Options + 107) = v8;
    *((_DWORD *)v7 + Options + 218) = 1743;
  }
  v11 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v11 )
    return UsbhFdoSystemPowerState(DeviceObject, Irp);
  if ( v11 == 1 )
    return UsbhFdoDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1753LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
}

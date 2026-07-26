/*
 * XREFs of ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01390B8
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016418 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 * Callees:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00AF40C (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisSetPowerSuspend(PIRP Irp, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _DEVICE_POWER_STATE DeviceState; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v7; // ebx

  DeviceState = a2->Parameters.Power.State.DeviceState;
  if ( (unsigned int)ndisWdmSendPmOidsForSuspend(a3, DeviceState) )
  {
    v7 = -1073741823;
    Irp->IoStatus.Status = -1073741823;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    PoSetPowerState(a3->DeviceObject, DevicePowerState, (POWER_STATE)DeviceState);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(a3->NextDeviceObject, Irp);
    return 259;
  }
  return v7;
}

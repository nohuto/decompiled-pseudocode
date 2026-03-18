/*
 * XREFs of UsbhFdoSetPowerSx_Action @ 0x1C0003F04
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     UsbhSshEnterSx @ 0x1C0004DC4 (UsbhSshEnterSx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhFdoSetPowerSx_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int LowPart; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  KIRQL v13; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = FdoExt(DeviceObject);
  v8 = Context[9];
  v9 = v7;
  Log((_DWORD)DeviceObject, 16, 1349283703, 0, (__int64)Irp);
  v10 = FdoExt(DeviceObject);
  v11 = ((unsigned __int8)*(_DWORD *)(v10 + 828) + 1) & 7;
  *(_DWORD *)(v10 + 828) = v11;
  v11 *= 32LL;
  *(_DWORD *)(v11 + v10 + 284) = 103;
  *(_DWORD *)(v11 + v10 + 288) = *(_DWORD *)(v10 + 4172);
  *(_DWORD *)(v11 + v10 + 292) = 202;
  *(_DWORD *)(v11 + v10 + 296) = LowPart;
  *(_DWORD *)(v10 + 4172) = 202;
  v12 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 32) = 1734964085;
  v13 = *(_BYTE *)(v12 + 5064);
  *(_QWORD *)(v12 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 5056), v13);
  UsbhSshEnterSx(DeviceObject, v8);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoSxIoComplete_Action, Context, 1u, 1u, 1u) < 0 )
  {
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoSxIoComplete_Action;
    v16[-1].Context = Context;
    v16[-1].Control = -32;
  }
  PoCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), Irp);
  Log((_DWORD)DeviceObject, 16, 1886156606, 0, 0LL);
  return 259LL;
}

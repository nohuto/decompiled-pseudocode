/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0006FCC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C003E760 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MajorFunction; // ecx
  FxDevice *v6; // r10
  FxIrpPreprocessInfo *Flink; // r9
  void *m_PkgIo; // rcx
  _IO_STACK_LOCATION *v10; // rax
  __int64 v11; // rcx
  FxIrpPreprocessInfo *v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  NTSTATUS v15; // esi
  _IO_STACK_LOCATION *v16; // rax
  unsigned int NumMinorFunctions; // esi
  __int64 v18; // rdi
  FxIrp v19; // [rsp+58h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( MajorFunction < 0x16 )
  {
LABEL_2:
    v19.m_Irp = Irp;
    if ( ((__int64)DeviceObject[1].CurrentIrp & 1) == 0 )
      goto LABEL_3;
    v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v15 >= 0 )
    {
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      FxIrp::SetCompletionRoutineEx(
        &v19,
        DeviceObject,
        (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxDevice::_CompletionRoutineForRemlockMaintenance,
        DeviceObject);
      --Irp->CurrentLocation;
      --Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_3;
    }
LABEL_24:
    Irp->IoStatus.Status = v15;
    IofCompleteRequest(Irp, 0);
    return v15;
  }
  v13 = MajorFunction - 22;
  if ( !v13 )
    goto LABEL_18;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_18;
  if ( v14 != 4 )
    goto LABEL_2;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
LABEL_18:
    v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v15 >= 0 )
      goto LABEL_3;
    goto LABEL_24;
  }
  v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
  if ( v15 < 0 )
    goto LABEL_24;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
LABEL_3:
  v6 = (FxDevice *)*((_QWORD *)DeviceObject->DeviceExtension - 6);
  Flink = (FxIrpPreprocessInfo *)v6->m_PreprocessInfoListHead.Flink;
  if ( Flink == (FxIrpPreprocessInfo *)&v6->m_PreprocessInfoListHead )
  {
LABEL_4:
    if ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 14 )
    {
LABEL_5:
      m_PkgIo = v6->m_PkgIo;
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          m_PkgIo = v6->m_PkgGeneral;
          return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
        case 3u:
        case 4u:
        case 0xFu:
          goto LABEL_5;
        case 0x16u:
        case 0x1Bu:
          m_PkgIo = v6->m_PkgPnp;
          if ( !m_PkgIo )
            goto LABEL_33;
          return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
        case 0x17u:
          m_PkgIo = v6->m_PkgWmi;
          return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
        default:
LABEL_33:
          m_PkgIo = v6->m_PkgDefault;
          break;
      }
    }
    return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
  }
  else
  {
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    v11 = v10->MajorFunction;
    while ( 1 )
    {
      v12 = Flink;
      Flink = (FxIrpPreprocessInfo *)Flink->ListEntry.Flink;
      if ( v12->Dispatch[v11].EvtDevicePreprocess )
        break;
LABEL_9:
      if ( Flink == (FxIrpPreprocessInfo *)&v6->m_PreprocessInfoListHead )
        goto LABEL_4;
    }
    NumMinorFunctions = v12->Dispatch[v11].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v18 = 0LL;
      while ( v12->Dispatch[v11].MinorFunctions[v18] != v10->MinorFunction )
      {
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= NumMinorFunctions )
          goto LABEL_9;
      }
    }
    return PreprocessIrp(v6, Irp, v12, Flink);
  }
}

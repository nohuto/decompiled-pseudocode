/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0003C30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C00039DC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  __int64 v6; // rdi
  _QWORD *v7; // r8
  _IO_STACK_LOCATION *v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int8 MinorFunction; // r14
  __int64 v12; // r11
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 (__fastcall *v15)(unsigned __int64, _IRP *, _QWORD *); // r9
  unsigned int v16; // r10d
  __int16 v17; // dx
  unsigned int v18; // eax
  unsigned int v19; // ebp
  int v21; // ecx
  __int64 v22; // rcx
  NTSTATUS v23; // esi
  unsigned int v24; // r15d
  _IO_STACK_LOCATION *v25; // rax
  unsigned __int64 v26; // rcx
  FxIrp v27; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction >= 0x16u )
  {
    if ( MajorFunction > 0x17u )
    {
      if ( MajorFunction != 27 )
        goto LABEL_2;
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
        if ( v23 >= 0 )
        {
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
          goto LABEL_3;
        }
        goto LABEL_40;
      }
    }
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v23 >= 0 )
      goto LABEL_3;
LABEL_40:
    Irp->IoStatus.Status = v23;
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v23;
  }
LABEL_2:
  v27.m_Irp = Irp;
  if ( ((__int64)DeviceObject[1].CurrentIrp & 1) != 0 )
  {
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v23 >= 0 )
    {
      v25 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v25[-1].MajorFunction = *(_OWORD *)&v25->MajorFunction;
      *(_OWORD *)&v25[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v25->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v25[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v25->Parameters.SetQuota + 6);
      v25[-1].FileObject = v25->FileObject;
      v25[-1].Control = 0;
      FxIrp::SetCompletionRoutineEx(
        &v27,
        DeviceObject,
        (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxDevice::_CompletionRoutineForRemlockMaintenance,
        DeviceObject);
      --Irp->CurrentLocation;
      --Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_3;
    }
    goto LABEL_40;
  }
LABEL_3:
  v6 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v7 = *(_QWORD **)(v6 + 368);
  if ( v7 == (_QWORD *)(v6 + 368) )
  {
LABEL_14:
    v21 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( v21 == 27 )
    {
LABEL_25:
      v22 = *(_QWORD *)(v6 + 648);
      if ( !v22 )
LABEL_26:
        v22 = *(_QWORD *)(v6 + 672);
    }
    else if ( v21 == 14 )
    {
LABEL_24:
      v22 = *(_QWORD *)(v6 + 640);
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          v22 = *(_QWORD *)(v6 + 656);
          break;
        case 3u:
        case 4u:
        case 0xFu:
          goto LABEL_24;
        case 0x16u:
          goto LABEL_25;
        case 0x17u:
          v22 = *(_QWORD *)(v6 + 664);
          break;
        default:
          goto LABEL_26;
      }
    }
    return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v22 + 64LL))(v22, Irp);
  }
  else
  {
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    v9 = 0LL;
    v10 = v8->MajorFunction;
    MinorFunction = v8->MinorFunction;
    v12 = 3 * v10;
    while ( 1 )
    {
      v13 = v7;
      v14 = v7;
      v7 = (_QWORD *)*v7;
      v15 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v13[v12 + 2];
      if ( v15 )
        break;
LABEL_13:
      if ( v7 == (_QWORD *)(v6 + 368) )
        goto LABEL_14;
    }
    v16 = v13[v12 + 3];
    if ( v16 )
    {
      v24 = 0;
      while ( *(_BYTE *)(v24 + v13[v12 + 4]) != MinorFunction )
      {
        if ( ++v24 >= v16 )
          goto LABEL_13;
      }
    }
    v17 = *(_WORD *)(v6 + 10);
    if ( *((_BYTE *)v14 + 688) )
    {
      v26 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v17 )
        v26 = 0LL;
      v18 = v15(v26, Irp, v7);
    }
    else
    {
      if ( v17 )
        v9 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v18 = v15(v9, Irp, v7);
    }
    v19 = v18;
    if ( (unsigned __int8)v10 >= 0x16u && ((unsigned __int8)v10 <= 0x17u || (_BYTE)v10 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v6 + 144) + 336LL), Irp, 0x20u);
  }
  return v19;
}

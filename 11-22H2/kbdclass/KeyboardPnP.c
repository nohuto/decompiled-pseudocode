/*
 * XREFs of KeyboardPnP @ 0x1C0002010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0002530 (WPP_RECORDER_SF_qqc.c)
 *     KeyboardStart @ 0x1C0002AE0 (KeyboardStart.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C000502C (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassRemoveDevice @ 0x1C0005860 (KeyboardClassRemoveDevice.c)
 *     KbdEnableDisablePort @ 0x1C000D010 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000E2B0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KeyboardPnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r14d
  PIO_WORKITEM *Pool2; // rbx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_STACK_LOCATION *v14; // rax
  unsigned int v15; // ebp
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS v17; // eax
  char v18; // bl
  char *v19; // rbp
  void *v20; // rbx
  bool v21; // zf
  struct _IO_STACK_LOCATION *v22; // rax
  unsigned int v23; // edi
  struct _IO_STACK_LOCATION *v24; // rax
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v26[5]; // [rsp+40h] [rbp-28h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !*((_BYTE *)DeviceExtension + 64) )
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return 3221225659LL;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    Irp->IoStatus.Status = v7;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqc(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      v10,
      RemlockSize,
      (char)DeviceObject,
      (char)Irp,
      CurrentStackLocation->MinorFunction);
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      Pool2 = (PIO_WORKITEM *)ExAllocatePool2(64LL, 16LL, 1130652235LL);
      if ( Pool2 )
      {
        WorkItem = IoAllocateWorkItem(DeviceObject);
        *Pool2 = WorkItem;
        if ( WorkItem )
        {
          Pool2[1] = (PIO_WORKITEM)Irp;
          IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, KeyboardStartWorker, File, 1u, 0x20u);
          v14 = Irp->Tail.Overlay.CurrentStackLocation;
          v15 = 259;
          *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
          *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
          *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v14->Parameters.SetQuota + 6);
          v14[-1].FileObject = v14->FileObject;
          v14[-1].Control = 0;
          v16 = Irp->Tail.Overlay.CurrentStackLocation;
          v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardPnpStartCompletion;
          v16[-1].Context = Pool2;
          v16[-1].Control = -32;
          Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
          goto LABEL_35;
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
      v26[1] = Irp;
      v26[0] = 0LL;
      v17 = KeyboardStart(DeviceObject, v26);
      Irp->IoStatus.Status = v17;
      Irp->IoStatus.Information = 0LL;
      v15 = v17;
      IofCompleteRequest(Irp, 0);
      goto LABEL_35;
    case 2u:
      KeyboardClassCancelPendingIrpLeds(DeviceExtension);
      KeyboardClassRemoveDevice(DeviceExtension);
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
      v22 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v22[-1].MajorFunction = *(_OWORD *)&v22->MajorFunction;
      *(_OWORD *)&v22[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v22->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v22[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v22->Parameters.SetQuota + 6);
      v22[-1].FileObject = v22->FileObject;
      v22[-1].Control = 0;
      v23 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
      ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      {
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 1 )
        {
          LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
          if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
          {
            ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
            WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
          }
        }
        else
        {
          *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 19) = 1;
          *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49]) = 0uLL;
        }
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
      ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
      IoDeleteDevice(DeviceObject);
      return v23;
    case 4u:
      if ( !*((_BYTE *)DeviceExtension + 65) )
        goto LABEL_21;
      ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_21;
      }
      v18 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 16);
      v19 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49];
      v19[16] = 0;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v18 )
      {
LABEL_21:
        *((_BYTE *)DeviceExtension + 65) = 0;
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        goto LABEL_34;
      }
      v20 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 41, 0LL);
      if ( v20 )
        IoUnregisterPlugPlayNotification(v20);
      KbdEnableDisablePort(0LL, Irp, DeviceExtension, v19);
      *((_BYTE *)DeviceExtension + 65) = 0;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_34:
      v15 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
LABEL_35:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
      return v15;
    case 0x14u:
      if ( !*((_BYTE *)DeviceExtension + 66) )
      {
        LODWORD(Irp->IoStatus.Information) |= 0x20u;
        Irp->IoStatus.Status = 0;
      }
      goto LABEL_33;
    case 0x17u:
      KeyboardClassCancelPendingIrpLeds(DeviceExtension);
      v21 = *((_QWORD *)DeviceExtension + 12) == 0LL;
      *((_BYTE *)DeviceExtension + 363) = 1;
      if ( !v21 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 22), 0);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_34;
    default:
LABEL_33:
      v24 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
      *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v24->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v24->Parameters.SetQuota + 6);
      v24[-1].FileObject = v24->FileObject;
      v24[-1].Control = 0;
      goto LABEL_34;
  }
}

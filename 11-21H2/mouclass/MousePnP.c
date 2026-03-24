/*
 * XREFs of MousePnP @ 0x1C0001510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0001730 (WPP_RECORDER_SF_qqc.c)
 *     MouseStart @ 0x1C0002AB0 (MouseStart.c)
 *     MouseClassRemoveDevice @ 0x1C00051D4 (MouseClassRemoveDevice.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000D170 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MousePnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  UCHAR MinorFunction; // al
  struct _IO_STACK_LOCATION *v12; // rax
  unsigned int v13; // edi
  PIO_WORKITEM *Pool2; // r15
  PIO_WORKITEM WorkItem; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  char v19; // di
  char *v20; // r15
  void *v21; // rbp
  struct _IO_STACK_LOCATION *v22; // rax
  unsigned int v23; // ebx
  NTSTATUS v24; // eax
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
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
  v10 = v6;
  if ( v6 < 0 )
  {
    Irp->IoStatus.Status = v6;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqc(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      v9,
      RemlockSize,
      (char)DeviceObject,
      (char)Irp,
      CurrentStackLocation->MinorFunction);
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction >= 5u && MinorFunction < 0x17u )
    goto LABEL_7;
  if ( !MinorFunction )
  {
    Pool2 = (PIO_WORKITEM *)ExAllocatePool2(64LL, 16LL, 1131769677LL);
    if ( Pool2 )
    {
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *Pool2 = WorkItem;
      if ( WorkItem )
      {
        Pool2[1] = (PIO_WORKITEM)Irp;
        IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, MouseStartWorker, File, 1u, 0x20u);
        v17 = Irp->Tail.Overlay.CurrentStackLocation;
        v13 = 259;
        *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
        *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
        v17[-1].FileObject = v17->FileObject;
        v17[-1].Control = 0;
        v18 = Irp->Tail.Overlay.CurrentStackLocation;
        v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MousePnpStartCompletion;
        v18[-1].Context = Pool2;
        v18[-1].Control = -32;
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
        goto LABEL_9;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
    v26[1] = Irp;
    v26[0] = 0LL;
    v24 = MouseStart(DeviceObject, v26);
    Irp->IoStatus.Status = v24;
    Irp->IoStatus.Information = 0LL;
    v13 = v24;
    IofCompleteRequest(Irp, 0);
    goto LABEL_9;
  }
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction == 4 )
    {
      if ( *((_BYTE *)DeviceExtension + 65) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
        {
          v19 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 16);
          v20 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45];
          v20[16] = 0;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( v19 )
          {
            v21 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 39, 0LL);
            if ( v21 )
              IoUnregisterPlugPlayNotification(v21);
            MouEnableDisablePort(0LL, 0LL, DeviceExtension, v20);
          }
        }
        else
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
      }
      *((_BYTE *)DeviceExtension + 65) = 0;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_8;
    }
    if ( MinorFunction == 23 )
    {
      LOBYTE(v7) = 1;
      MouseClassRemoveDevice(DeviceExtension, v7);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_8;
    }
LABEL_7:
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
    *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
    v12[-1].FileObject = v12->FileObject;
    v12[-1].Control = 0;
LABEL_8:
    v13 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
LABEL_9:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
    return v13;
  }
  MouseClassRemoveDevice(DeviceExtension, 0LL);
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
      *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 19) = 1;
      *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45]) = 0uLL;
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
  ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
  IoDeleteDevice(DeviceObject);
  return v23;
}

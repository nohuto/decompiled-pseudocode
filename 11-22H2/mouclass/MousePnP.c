/*
 * XREFs of MousePnP @ 0x1C0001EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0002100 (WPP_RECORDER_SF_qqc.c)
 *     MouseStart @ 0x1C00026C0 (MouseStart.c)
 *     MouseClassRemoveDevice @ 0x1C0004FEC (MouseClassRemoveDevice.c)
 *     MouEnableDisablePort @ 0x1C000D230 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000DEF0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MousePnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  struct _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // edi
  unsigned __int64 v14; // rdx
  PIO_WORKITEM *Pool2; // r15
  PIO_WORKITEM WorkItem; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  NTSTATUS v19; // eax
  char v20; // di
  char *v21; // r15
  void *v22; // rbp
  struct _IO_STACK_LOCATION *v23; // rax
  unsigned int v24; // ebx
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v26[5]; // [rsp+40h] [rbp-28h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *((_BYTE *)DeviceExtension + 64) )
  {
    v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
    v10 = v6;
    if ( v6 < 0 )
    {
      Irp->IoStatus.Status = v6;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v10;
    }
    else
    {
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
      if ( CurrentStackLocation->MinorFunction == 7 )
      {
LABEL_6:
        v11 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
        *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
        v11[-1].FileObject = v11->FileObject;
        v11[-1].Control = 0;
LABEL_7:
        v12 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
      }
      else
      {
        v14 = 0x1C0000000uLL;
        switch ( CurrentStackLocation->MinorFunction )
        {
          case 0u:
            Pool2 = (PIO_WORKITEM *)ExAllocatePool2(64LL, 16LL, 1131769677LL);
            if ( !Pool2 )
              goto LABEL_17;
            WorkItem = IoAllocateWorkItem(DeviceObject);
            *Pool2 = WorkItem;
            if ( WorkItem )
            {
              Pool2[1] = (PIO_WORKITEM)Irp;
              IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, MouseStartWorker, File, 1u, 0x20u);
              v17 = Irp->Tail.Overlay.CurrentStackLocation;
              v12 = 259;
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
            }
            else
            {
              ExFreePoolWithTag(Pool2, 0);
LABEL_17:
              MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
              v26[1] = Irp;
              v26[0] = 0LL;
              v19 = MouseStart(DeviceObject, v26);
              Irp->IoStatus.Status = v19;
              Irp->IoStatus.Information = 0LL;
              v12 = v19;
              IofCompleteRequest(Irp, 0);
            }
            break;
          case 2u:
            MouseClassRemoveDevice(DeviceExtension, 0LL);
            IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
            v23 = Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
            *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
            v23[-1].FileObject = v23->FileObject;
            v23[-1].Control = 0;
            v24 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
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
            return v24;
          case 4u:
            if ( *((_BYTE *)DeviceExtension + 65) )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
              {
                v20 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 16);
                v21 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45];
                v21[16] = 0;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                if ( v20 )
                {
                  v22 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 39, 0LL);
                  if ( v22 )
                    IoUnregisterPlugPlayNotification(v22);
                  MouEnableDisablePort(0LL, 0LL, DeviceExtension, v21);
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
            goto LABEL_7;
          case 0x17u:
            LOBYTE(v14) = 1;
            MouseClassRemoveDevice(DeviceExtension, v14);
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            goto LABEL_7;
          default:
            goto LABEL_6;
        }
      }
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
      return v12;
    }
  }
  else
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return 3221225659LL;
  }
}

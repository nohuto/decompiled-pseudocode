/*
 * XREFs of KbdEnableDisablePort @ 0x1C000D010
 * Callers:
 *     KeyboardClassClose @ 0x1C0001C20 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001D90 (KeyboardClassCreate.c)
 *     KeyboardPnP @ 0x1C0002010 (KeyboardPnP.c)
 *     KeyboardStart @ 0x1C0002AE0 (KeyboardStart.c)
 *     KeyboardClassEnableGlobalPort @ 0x1C000F510 (KeyboardClassEnableGlobalPort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000652C (WPP_RECORDER_SF_.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000E2B0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KbdEnableDisablePort(char a1, IRP *a2, PVOID *a3, PFILE_OBJECT *a4)
{
  NTSTATUS Status; // edi
  IRP *v7; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rbx
  struct _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // rdx
  struct _IO_STACK_LOCATION *v14; // rax
  void *Pool2; // rbp
  struct _IO_STACK_LOCATION *v16; // rax
  int v17; // eax
  struct _IO_STACK_LOCATION *v18; // rcx
  struct _IO_STACK_LOCATION *v19; // rax
  struct _IO_STACK_LOCATION *v20; // rcx
  struct _IRP *MasterIrp; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-58h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectName.Length = 0LL;
  Status = 0;
  ObjectName.Buffer = 0LL;
  DeviceObject = 0LL;
  v7 = a2;
  ResultLength = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  if ( a3[1] == *a3 )
  {
    if ( *((_BYTE *)a3 + 64) )
    {
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( !a1 )
      {
        v14 = v7->Tail.Overlay.CurrentStackLocation;
        if ( v14[-1].MajorFunction != 2 )
          v14[-1].MajorFunction = 2;
      }
      v10 = (struct _DEVICE_OBJECT *)a3[2];
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v11 = v7->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KbdSyncComplete;
      v11[-1].Context = &Event;
      v11[-1].Control = -32;
      IofCallDriver(v10, v7);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v7->IoStatus.Status;
      goto LABEL_8;
    }
LABEL_18:
    *((_BYTE *)a3 + 360) = a1;
    v16 = v7->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = 722947;
    v18 = v7->Tail.Overlay.CurrentStackLocation;
    if ( !a1 )
      v17 = 724995;
    v18[-1].Parameters.Read.Length = 0;
    v18[-1].Parameters.Create.Options = 0;
    v18[-1].Parameters.Read.ByteOffset.LowPart = v17;
    v18[-1].Parameters.CreatePipe.Parameters = 0LL;
    v18[-1].MajorFunction = 15;
    Status = KeyboardSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
    goto LABEL_8;
  }
  if ( !*((_BYTE *)a3 + 64) )
    goto LABEL_18;
  if ( a1 )
  {
    IoGetDeviceProperty((PDEVICE_OBJECT)a3[3], DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength);
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1130652235LL);
    if ( !Pool2 )
      return 3221225626LL;
    IoGetDeviceProperty(
      (PDEVICE_OBJECT)a3[3],
      DevicePropertyPhysicalDeviceObjectName,
      ResultLength,
      Pool2,
      &ResultLength);
    ObjectName.MaximumLength = ResultLength;
    ObjectName.Buffer = (PWSTR)Pool2;
    ObjectName.Length = ResultLength - 2;
    Status = IoGetDeviceObjectPointer(&ObjectName, 0x1F01FFu, a4, &DeviceObject);
    ExFreePoolWithTag(Pool2, 0);
    if ( Status >= 0 )
    {
      if ( v7 )
      {
        v19 = v7->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
        *(_OWORD *)&v19[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v19->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v19[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v19->Parameters.SetQuota + 6);
        v19[-1].FileObject = v19->FileObject;
        v19[-1].Control = 0;
        v20 = v7->Tail.Overlay.CurrentStackLocation;
        v20[-1].MajorFunction = 15;
        v20[-1].Parameters.Read.Length = 0;
        v20[-1].Parameters.Create.Options = 4;
        v20[-1].Parameters.Read.ByteOffset.LowPart = 720904;
        v20[-1].FileObject = *a4;
        MasterIrp = v7->AssociatedIrp.MasterIrp;
        v7->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
        KeyboardSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
        v7->AssociatedIrp.MasterIrp = MasterIrp;
      }
      Status = IoRegisterPlugPlayNotification(
                 EventCategoryTargetDeviceChange,
                 0,
                 *a4,
                 *((PDRIVER_OBJECT *)*a3 + 1),
                 KeyboardClassPlugPlayNotification,
                 a3,
                 a3 + 41);
    }
  }
  else
  {
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
  }
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 1LL);
    }
  }
  return (unsigned int)Status;
}

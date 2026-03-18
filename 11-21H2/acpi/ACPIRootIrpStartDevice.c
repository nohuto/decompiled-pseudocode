/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1C00BB260
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0002D90 (ACPIRegisterForDeviceNotifications.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIInitShutdownNotification @ 0x1C008ED60 (ACPIInitShutdownNotification.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB1B0 (RtlDuplicateCmResourceList.c)
 *     ACPIInitStartACPI @ 0x1C00BEC40 (ACPIInitStartACPI.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  const char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rcx
  NTSTATUS Status; // edi
  _IO_STACK_LOCATION *v15; // rax
  unsigned int MinorFunction; // r15d
  unsigned int *SecurityContext; // rdx
  void *v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rax
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = (const char *)&unk_1C006FB8B;
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = (const char *)&unk_1C006FB8B;
  v9 = (const char *)&unk_1C006FB8B;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
      (char)Irp,
      v6,
      v8,
      v9);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x200uLL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 776), Irp);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = Irp->IoStatus.Status;
  }
  v15 = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = v15->MinorFunction;
  if ( Status >= 0 )
  {
    SecurityContext = (unsigned int *)v15->Parameters.Create.SecurityContext;
    if ( SecurityContext )
      v18 = RtlDuplicateCmResourceList(v13, SecurityContext);
    else
      v18 = 0LL;
    *(_QWORD *)(v7 + 680) = 0LL;
    *(_QWORD *)(v7 + 672) = v18;
    Status = ACPIInitStartACPI(BugCheckParameter3);
    if ( Status >= 0 )
      *(_DWORD *)(v7 + 368) = 2;
    ACPIRegisterForDeviceNotifications(BugCheckParameter3, (__int64)ACPIRootEvent, BugCheckParameter3);
    ACPIInitShutdownNotification();
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  v19 = *(_QWORD *)(v7 + 8);
  v20 = (const char *)&unk_1C006FB8B;
  if ( (v19 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v7 + 608);
    if ( (v19 & 0x400000000000LL) != 0 )
      v20 = *(const char **)(v7 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v21 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Au,
      (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
      (char)Irp,
      ACPIDispatchPnpTableNames[v21],
      Status,
      v7,
      v5,
      v20);
  }
  return (unsigned int)Status;
}

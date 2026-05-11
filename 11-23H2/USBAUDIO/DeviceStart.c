/*
 * XREFs of DeviceStart @ 0x1C002A450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0007318 (McTemplateK0zq_EtwWriteTransfer.c)
 *     DeInitSideband @ 0x1C00080F8 (DeInitSideband.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00098DC (McTemplateK0_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C00099DC (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddd @ 0x1C0009D58 (WPP_RECORDER_AND_TRACE_SF_qqddd.c)
 *     InitializeSideband @ 0x1C000B83C (InitializeSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     IsSidebandSupported @ 0x1C002B038 (IsSidebandSupported.c)
 *     FilterCreateFilterContext @ 0x1C002BCD4 (FilterCreateFilterContext.c)
 *     FilterCreateFilterFactory @ 0x1C002BDEC (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C00306C0 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C00313D4 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // r14
  int FilterContext; // edi
  PDEVICE_OBJECT v6; // rcx
  void *v7; // r9
  int v8; // ebx
  PDEVICE_OBJECT v9; // rcx
  PDEVICE_OBJECT PhysicalDeviceObject; // rcx
  __int64 Timer_high; // rcx
  __int64 v12; // r8
  PULONG v13; // r9
  char v14; // dl
  int v15; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  int v17; // r8d
  struct _KEVENT *Pool2; // rax
  int v19; // edx
  int v20; // r8d
  int v22; // [rsp+20h] [rbp-60h]
  int v23; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-50h]
  void *v25; // [rsp+38h] [rbp-48h]
  int v26; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v27[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v28; // [rsp+B0h] [rbp+30h] BYREF

  Context = (char *)a1->Context;
  FilterContext = 0;
  v28 = 0;
  v6 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v25 = &WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids;
    LOWORD(v24) = 20;
    v23 = 1;
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 134) = 1;
    Context[64] = 0;
    FilterContext = (*(__int64 (__fastcall **)(struct _KSDEVICE *, __int64, __int64, void *))(pExtBusDeviceDispatchTable
                                                                                            + 8))(
                      a1,
                      a2,
                      a3,
                      v7);
    if ( FilterContext < 0 )
      goto LABEL_53;
    FilterContext = FilterCreateFilterContext(a1, Context + 128);
    if ( FilterContext < 0 )
      goto LABEL_53;
    FilterContext = IsSidebandSupported(a1, &v28);
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v8 = v28;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    if ( FilterContext < 0 )
      goto LABEL_53;
    if ( v8 && (FilterContext = InitializeSideband(a1), FilterContext < 0) )
    {
      v9 = WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_52:
        WPP_RECORDER_AND_TRACE_SF_qd(v9->AttachedDevice, a2, a3, v9->DeviceExtension);
    }
    else
    {
      FilterContext = FilterCreateFilterFactory(a1, a2, a3);
      if ( FilterContext >= 0 )
      {
        PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v28 = 0;
        v26 = 0;
        v27[0] = 0;
        if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, &v28, &v26, v27) >= 0 )
        {
          *((_DWORD *)Context + 136) = v28;
          *((_DWORD *)Context + 137) = v26;
          *((_DWORD *)Context + 135) = v27[0];
        }
        v13 = PoRegisterDeviceForIdleDetection(
                a1->PhysicalDeviceObject,
                *((_DWORD *)Context + 136),
                *((_DWORD *)Context + 137),
                (DEVICE_POWER_STATE)*((_DWORD *)Context + 135));
        *((_QWORD *)Context + 66) = v13;
        v14 = 0;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
          if ( (Timer_high & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            v14 = 1;
        }
        LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qqddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v12,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v22,
            v23,
            v24,
            (int)v25);
        FilterContext = InitializeIrpThreadAndQueue(Timer_high, Context, v12, v13);
        if ( FilterContext >= 0 )
        {
          if ( !v8 )
            goto LABEL_83;
          WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
          if ( WorkItem )
          {
            Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1700952133LL);
            *((_QWORD *)Context + 124) = Pool2;
            if ( Pool2 )
            {
              KeInitializeEvent(Pool2, NotificationEvent, 0);
              IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
              KeWaitForSingleObject(Context + 960, Executive, 0, 0, 0LL);
              goto LABEL_83;
            }
            IoFreeWorkItem(WorkItem);
            LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v20,
                WPP_GLOBAL_Control->DeviceExtension);
            }
            FilterContext = -1073741670;
          }
          else
          {
            LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v17,
                WPP_GLOBAL_Control->DeviceExtension);
            }
            FilterContext = -1073741670;
          }
          goto LABEL_53;
        }
        v9 = WPP_GLOBAL_Control;
        LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_52;
      }
    }
LABEL_53:
    KeWaitForSingleObject(Context + 752, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)a1);
    KeReleaseMutex((PRKMUTEX)(Context + 752), 0);
    Context[64] = 1;
    v6 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_83:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)v6, a2, a3, *((const wchar_t **)Context + 3), FilterContext);
  return (unsigned int)FilterContext;
}

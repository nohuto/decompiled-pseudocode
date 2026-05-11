/*
 * XREFs of DeviceStart @ 0x1C0028270
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001724 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C00017CC (McTemplateK0zq_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C00019EC (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddd @ 0x1C0001F40 (WPP_RECORDER_AND_TRACE_SF_qqddd.c)
 *     DeInitSideband @ 0x1C000804C (DeInitSideband.c)
 *     InitializeSideband @ 0x1C0008244 (InitializeSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     IsSidebandSupported @ 0x1C00294B0 (IsSidebandSupported.c)
 *     FilterCreateFilterFactory @ 0x1C0029ED4 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C00313A0 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C0032284 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // r14
  int FilterFactory; // edi
  PDEVICE_OBJECT v6; // rcx
  void *v7; // r9
  char v8; // dl
  int v9; // ebx
  PDEVICE_OBJECT v10; // rcx
  char v11; // dl
  char v12; // r8
  unsigned __int16 v13; // ax
  PDEVICE_OBJECT PhysicalDeviceObject; // rcx
  __int64 Timer_high; // rcx
  __int64 v16; // r8
  PULONG v17; // r9
  char v18; // dl
  struct _IO_WORKITEM *WorkItem; // rbx
  char v20; // dl
  struct _KEVENT *Pool2; // rax
  char v22; // dl
  __int64 v24; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+28h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-50h]
  int v28; // [rsp+38h] [rbp-48h]
  int v29; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v30[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v31; // [rsp+B0h] [rbp+30h] BYREF

  Context = (char *)a1->Context;
  FilterFactory = 0;
  v31 = 0;
  v6 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      1u,
      0x13u,
      (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 134) = 1;
    Context[64] = 0;
    FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *, __int64, __int64, void *))(pExtBusDeviceDispatchTable
                                                                                            + 8))(
                      a1,
                      a2,
                      a3,
                      v7);
    if ( FilterFactory < 0 )
      goto LABEL_74;
    FilterFactory = IsSidebandSupported(a1, &v31);
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v9 = v31;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_l(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v24,
        v26,
        v27,
        v28);
    if ( FilterFactory < 0 )
      goto LABEL_74;
    if ( v9 && (FilterFactory = InitializeSideband(a1), FilterFactory < 0) )
    {
      v10 = WPP_GLOBAL_Control;
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = 21;
LABEL_52:
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)v10->AttachedDevice,
          v11,
          v12,
          (__int64)v10->DeviceExtension,
          v24,
          1u,
          v13,
          (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
      }
    }
    else
    {
      FilterFactory = FilterCreateFilterFactory(a1);
      if ( FilterFactory >= 0 )
      {
        PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v31 = 0;
        v29 = 0;
        v30[0] = 0;
        if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, &v31, &v29, v30) >= 0 )
        {
          *((_DWORD *)Context + 136) = v31;
          *((_DWORD *)Context + 137) = v29;
          *((_DWORD *)Context + 135) = v30[0];
        }
        v17 = PoRegisterDeviceForIdleDetection(
                a1->PhysicalDeviceObject,
                *((_DWORD *)Context + 136),
                *((_DWORD *)Context + 137),
                (DEVICE_POWER_STATE)*((_DWORD *)Context + 135));
        *((_QWORD *)Context + 66) = v17;
        v18 = 0;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
          if ( (Timer_high & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            v18 = 1;
        }
        LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qqddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v16,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v24,
            v26,
            v27,
            v28);
        FilterFactory = InitializeIrpThreadAndQueue(Timer_high, Context, v16, v17);
        if ( FilterFactory >= 0 )
        {
          if ( !v9 )
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
            v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( v22 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v22,
                *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v24,
                1u,
                0x19u,
                (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
            FilterFactory = -1073741670;
          }
          else
          {
            v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v20,
                *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v24,
                1u,
                0x18u,
                (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
            FilterFactory = -1073741670;
          }
          goto LABEL_74;
        }
        v10 = WPP_GLOBAL_Control;
        v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v13 = 23;
          goto LABEL_52;
        }
      }
    }
LABEL_74:
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
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v25,
        1u,
        0x1Au,
        (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  }
LABEL_83:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)v6, a2, a3, *((const wchar_t **)Context + 3), FilterFactory);
  return (unsigned int)FilterFactory;
}

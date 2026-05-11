/*
 * XREFs of DeviceStop @ 0x1C0028840
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001724 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001768 (McTemplateK0q_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ExitIrpThreadAndQueue @ 0x1C0002B40 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C000804C (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeviceStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v5; // esi
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  struct _KSFILTERFACTORY *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1u,
      0x1Eu,
      (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_STOP_ENTER, a3);
  if ( !*(_BYTE *)(v3 + 64) )
  {
    *(_BYTE *)(v3 + 64) = 1;
    ExitIrpThreadAndQueue(v3);
  }
  KeWaitForSingleObject((PVOID)(v3 + 752), Executive, 0, 0, 0LL);
  DeInitSideband(a1);
  KeReleaseMutex((PRKMUTEX)(v3 + 752), 0);
  v10 = *(void **)(v3 + 992);
  if ( v10 )
  {
    KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v3 + 992), 0x65627845u);
    *(_QWORD *)(v3 + 992) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 67) )
    v5 = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  v11 = *(struct _KSFILTERFACTORY **)(v3 + 120);
  if ( v11 )
  {
    KsFilterFactorySetDeviceClassesState(v11, 0);
    *(_QWORD *)(v3 + 120) = 0LL;
  }
  if ( v5 < 0 )
  {
    v11 = (struct _KSFILTERFACTORY *)WPP_GLOBAL_Control;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        1u,
        0x1Fu,
        (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)v11, v8, v9, v5);
}

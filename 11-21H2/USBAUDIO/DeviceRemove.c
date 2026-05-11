/*
 * XREFs of DeviceRemove @ 0x1C0001420
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C000168C (McGenEventUnregister_EtwUnregister.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     WmiUnregisterProvider @ 0x1C00321A0 (WmiUnregisterProvider.c)
 */

__int64 __fastcall DeviceRemove(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v5; // rcx
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v3 = *(_QWORD **)(a1 + 16);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v5 = (void *)v3[65];
  if ( v5 )
  {
    PoDeletePowerRequest(v5);
    v3[65] = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(pExtBusDeviceDispatchTable + 24))(a1, a2, a3);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v7 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v6);
  WmiUnregisterProvider(a1);
  return McGenEventUnregister_EtwUnregister();
}

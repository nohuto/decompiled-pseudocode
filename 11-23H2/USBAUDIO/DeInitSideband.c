/*
 * XREFs of DeInitSideband @ 0x1C00080F8
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 *     DeviceStop @ 0x1C002AA30 (DeviceStop.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C002B330 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     DeviceSurpriseRemoval @ 0x1C003C780 (DeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeInitSideband(__int64 a1)
{
  NTSTATUS v2; // edi
  char v3; // bl
  char v4; // dl
  char v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rsi
  void *v8; // rdx

  v2 = 0;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v4, v5, WPP_GLOBAL_Control->DeviceExtension);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 864);
  if ( v7 )
  {
    v2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 720), 0LL, File, 1u, 0x20u);
    if ( v2 >= 0 )
    {
      KeSetEvent((PRKEVENT)(v6 + 832), 0, 0);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v6 + 720), 0LL, 0x20u);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = &WPP_608d84e01a553a93359f42cc4da58819_Traceguids;
    LOBYTE(v8) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v8,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v2;
}

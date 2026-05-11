/*
 * XREFs of DeInitSideband @ 0x1C000804C
 * Callers:
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0028840 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0028A60 (DeviceSurpriseRemoval.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0029710 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeInitSideband(__int64 a1)
{
  NTSTATUS v2; // edi
  char v3; // bl
  char v4; // dl
  char v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rsi
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]

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
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      RemlockSize,
      9u,
      0xEu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
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
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      RemlockSize,
      9u,
      0xFu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  return (unsigned int)v2;
}

/*
 * XREFs of IsDeviceInSidebandMode @ 0x1C0008690
 * Callers:
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0029710 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall IsDeviceInSidebandMode(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbp
  char v4; // di
  char v5; // dl
  char v6; // r8
  unsigned int v7; // esi
  int v8; // edx
  void *v9; // r8
  int WaitMode; // [rsp+20h] [rbp-68h]
  int WaitModea; // [rsp+20h] [rbp-68h]
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-60h]
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  Timeout.QuadPart = -100000000LL;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      WaitMode,
      9u,
      0x11u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  Object[0] = (PVOID)(v2 + 808);
  Object[1] = (PVOID)(v2 + 832);
  v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
  if ( v7 == 1 )
    v7 = -1073741536;
  KeWaitForSingleObject((PVOID)(v2 + 752), Executive, 0, 0, 0LL);
  *a2 = *(_DWORD *)(v2 + 856);
  KeReleaseMutex((PRKMUTEX)(v2 + 752), 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v8 || v4 )
  {
    v9 = &WPP_44af59a87f893648f64c3513847e50b7_Traceguids;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      (_DWORD)v9,
      WPP_GLOBAL_Control->DeviceExtension,
      WaitModea,
      *(_DWORD *)Alertable,
      18,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      *a2,
      v7);
  }
  return v7;
}

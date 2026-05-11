/*
 * XREFs of ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x1C000C4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::CloseAllPinInstances(CSidebandDevice *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  void *v7; // rcx
  char v8; // dl
  char v9; // dl
  void *v10; // r8

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  v5 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 104LL);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (void *)v6[6];
    v6 = (_QWORD *)*v6;
    ObfDereferenceObject(v7);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v8 = 0;
    }
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v9 || v2 )
  {
    v10 = &WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids;
    LOBYTE(v10) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}

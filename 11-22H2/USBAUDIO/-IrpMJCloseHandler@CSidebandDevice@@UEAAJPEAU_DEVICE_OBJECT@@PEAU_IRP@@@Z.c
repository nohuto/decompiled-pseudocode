/*
 * XREFs of ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0010130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00112C4 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJCloseHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  struct _IRP *v3; // rsi
  char v5; // bl
  char v6; // dl
  int v7; // edx
  void *v8; // r8

  v3 = a3;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( v6 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v6, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  CSidebandDevice::RemoveFileFromOpenHandles(this, v3->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !--**((_DWORD **)this + 5) )
    (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)this + 16LL))(this);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v7 || v5 )
  {
    v8 = &WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v7, (_DWORD)v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}

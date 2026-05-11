/*
 * XREFs of ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000DEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJCloseHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  char v5; // bl
  char v6; // dl
  char v7; // r8
  PFILE_OBJECT FileObject; // rsi
  KIRQL v9; // bp
  _QWORD **v10; // r9
  _QWORD *v11; // rcx
  _QWORD **v12; // rdx
  char v13; // dl
  _QWORD *v14; // rax
  char v15; // dl
  int v17; // [rsp+20h] [rbp-48h]

  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      9u,
      0x96u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  FileObject = a3->Tail.Overlay.CurrentStackLocation->FileObject;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)this + 6) + 240LL));
  v10 = (_QWORD **)(*((_QWORD *)this + 6) + 224LL);
  v11 = *v10;
  if ( *v10 != v10 )
  {
    while ( 1 )
    {
      v12 = (_QWORD **)*v11;
      if ( (PFILE_OBJECT)*(v11 - 1) == FileObject )
        break;
      v11 = (_QWORD *)*v11;
      if ( v12 == v10 )
        goto LABEL_14;
    }
    if ( v12[1] != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    ExFreePool(v11 - 1);
  }
LABEL_14:
  KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 6) + 240LL), v9);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      9u,
      0x1Bu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  if ( !--**((_DWORD **)this + 6) )
    (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)this + 16LL))(this);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v15 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( v15 || v5 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      9u,
      0x97u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return 0LL;
}

/*
 * XREFs of ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJCreateHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  char v5; // bl
  char v6; // dl
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v9; // edi
  PFILE_OBJECT FileObject; // rbp
  char *PoolWithTag; // rax
  char v12; // dl
  char v13; // dl
  char v14; // dl
  int v16; // [rsp+20h] [rbp-58h]

  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
      v16,
      9u,
      0x94u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  FileObject = CurrentStackLocation->FileObject;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x33627845u);
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
    *(_QWORD *)PoolWithTag = FileObject;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(*((_QWORD *)this + 6) + 224LL),
      (PLIST_ENTRY)(PoolWithTag + 8),
      (PKSPIN_LOCK)(*((_QWORD *)this + 6) + 240LL));
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v12 = 0;
    }
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        9u,
        0x1Au,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    ++**((_DWORD **)this + 6);
    (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    v9 = -1073741670;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        9u,
        0x19u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v14 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( v14 || v5 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v16,
      9u,
      0x95u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return v9;
}

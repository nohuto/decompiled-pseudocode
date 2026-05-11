/*
 * XREFs of InitializeSideband @ 0x1C0008244
 * Callers:
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z @ 0x1C0008F14 (--0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

__int64 __fastcall InitializeSideband(struct _KSDEVICE *a1)
{
  char *Context; // rbx
  char v3; // si
  char v4; // dl
  char v5; // r8
  struct _IO_REMOVE_LOCK *v6; // r15
  NTSTATUS v7; // edi
  char v8; // dl
  struct _KMUTANT *v9; // r12
  CSidebandDevice *PoolWithTag; // rax
  CSidebandDevice *v11; // rbx
  struct IUnknown *v12; // r8
  CSidebandDevice *v13; // rax
  CSidebandDevice *v14; // rbx
  CSidebandDevice *v15; // r14
  char v16; // dl
  int RemlockSize; // [rsp+20h] [rbp-58h]
  int RemlockSizea; // [rsp+20h] [rbp-58h]

  Context = (char *)a1->Context;
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
      0xAu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  v6 = (struct _IO_REMOVE_LOCK *)(Context + 720);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 720), 0LL, File, 1u, 0x20u);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v8 = 0;
    }
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        RemlockSizea,
        9u,
        0xBu,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    goto LABEL_37;
  }
  v9 = (struct _KMUTANT *)(Context + 752);
  KeWaitForSingleObject(Context + 752, Executive, 0, 0, 0LL);
  PoolWithTag = (CSidebandDevice *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x110uLL, 0x32627845u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = 0LL;
LABEL_27:
    v7 = -1073741670;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v16 = 0;
    }
    if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        RemlockSizea,
        9u,
        0xCu,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    goto LABEL_24;
  }
  memset(PoolWithTag, 0, 0x110uLL);
  v13 = CSidebandDevice::CSidebandDevice(v11, a1, v12);
  v14 = v13;
  v15 = v13;
  if ( !v13 )
    goto LABEL_27;
  (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v13 + 8LL))(v13);
  v7 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 24LL))(v14);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 48LL))(v14);
    if ( v7 < 0 )
      (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 40LL))(v14);
  }
LABEL_24:
  KeReleaseMutex(v9, 0);
  if ( v7 < 0 )
  {
    if ( v15 )
      (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v15 + 16LL))(v15);
    IoReleaseRemoveLockAndWaitEx(v6, 0LL, 0x20u);
  }
  else
  {
    IoReleaseRemoveLockEx(v6, 0LL, 0x20u);
  }
LABEL_37:
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
      RemlockSizea,
      9u,
      0xDu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  return (unsigned int)v7;
}

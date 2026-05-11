/*
 * XREFs of SidebandDispatchIrp @ 0x1C00089C8
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C0029A50 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SidebandDispatchIrp(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  char v4; // di
  char v5; // dl
  char v6; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  int v9; // ebx
  char v10; // dl
  char *Context; // rbx
  struct _KMUTANT *v12; // r12
  __int64 v13; // r14
  struct _IO_REMOVE_LOCK *v14; // r15
  int v15; // eax
  PDEVICE_OBJECT v16; // rcx
  char v17; // dl
  char v18; // r8
  unsigned __int16 v19; // ax
  char v20; // dl
  char v21; // dl
  int Timeout; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+88h] [rbp+10h]

  v24 = 0;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
      Timeout,
      9u,
      0x13u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  if ( Irp->RequestorMode
    || (CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation, (CurrentStackLocation->Flags & 1) != 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v20 = 0;
    }
    if ( v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        Timeout,
        9u,
        0x14u,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    v9 = -1073741790;
    goto LABEL_61;
  }
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( !DeviceForDeviceObject )
  {
    v9 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        Timeout,
        9u,
        0x15u,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    goto LABEL_61;
  }
  Context = (char *)DeviceForDeviceObject->Context;
  v12 = (struct _KMUTANT *)(Context + 752);
  KeWaitForSingleObject(Context + 752, Executive, 0, 0, 0LL);
  v13 = *((_QWORD *)Context + 108);
  if ( v13 )
  {
    if ( CurrentStackLocation->MajorFunction == 2 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 72LL))(
             *((_QWORD *)Context + 108),
             FunctionalDeviceObject,
             Irp);
      goto LABEL_24;
    }
    v14 = (struct _IO_REMOVE_LOCK *)(Context + 720);
    v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 720), 0LL, File, 1u, 0x20u);
    if ( v9 >= 0 )
    {
      if ( CurrentStackLocation->MajorFunction )
      {
        if ( CurrentStackLocation->MajorFunction == 14 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 88LL))(
                  v13,
                  FunctionalDeviceObject,
                  Irp);
        }
        else
        {
          if ( CurrentStackLocation->MajorFunction != 15 )
          {
            v9 = -1073741811;
LABEL_36:
            IoReleaseRemoveLockEx(v14, 0LL, 0x20u);
            goto LABEL_24;
          }
          v15 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 96LL))(
                  v13,
                  FunctionalDeviceObject,
                  Irp);
        }
        v24 = 1;
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 80LL))(
                v13,
                FunctionalDeviceObject,
                Irp);
      }
      v9 = v15;
      goto LABEL_36;
    }
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = 22;
LABEL_45:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v16->AttachedDevice,
        v17,
        v18,
        (__int64)v16->DeviceExtension,
        Timeout,
        9u,
        v19,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    }
  }
  else
  {
    v9 = -1073741437;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v17 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = 23;
      goto LABEL_45;
    }
  }
LABEL_24:
  KeReleaseMutex(v12, 0);
  if ( !v24 )
  {
LABEL_61:
    Irp->IoStatus.Status = v9;
    IofCompleteRequest(Irp, 0);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v21 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( v21 || v4 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v4,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Timeout,
      9u,
      0x18u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  return (unsigned int)v9;
}

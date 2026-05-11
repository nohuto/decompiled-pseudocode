/*
 * XREFs of ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012B64
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BDC4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_3eb03d9b9151e7f3b9b0e59022a4a233____::_2_::scope_exit::_scope_exit @ 0x1C00113FC (_scope_exit__lambda_3eb03d9b9151e7f3b9b0e59022a4a233____--_2_--scope_exit--_scope_exit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::GetSiop(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v4; // bl
  char v5; // al
  char v6; // r8
  bool v7; // zf
  unsigned int v8; // edi
  char v9; // r8
  PVOID DeviceExtension; // r9
  unsigned __int16 v11; // ax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  char v14; // dl
  int PinFromEpIndex; // eax
  PDEVICE_OBJECT v16; // r10
  char v17; // r8
  unsigned __int16 v18; // cx
  _QWORD *Context; // r8
  int v20; // eax
  ULONG_PTR v21; // rcx
  ULONG v22; // eax
  char v23; // dl
  __int64 v24; // rdx
  int v25; // edx
  unsigned int v26; // ebx
  int v28; // [rsp+20h] [rbp-49h]
  int v29; // [rsp+28h] [rbp-41h]
  unsigned int v30; // [rsp+60h] [rbp-9h] BYREF
  struct _KSPIN *v31; // [rsp+68h] [rbp-1h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v32; // [rsp+70h] [rbp+7h] BYREF
  PIRP *v33[2]; // [rsp+78h] [rbp+Fh] BYREF
  char v34; // [rsp+88h] [rbp+1Fh]
  struct _IRP *v35; // [rsp+D8h] [rbp+6Fh] BYREF
  int v36; // [rsp+E0h] [rbp+77h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+7Fh] BYREF

  v35 = a2;
  v30 = -1;
  v36 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v32 = 0LL;
  v31 = 0LL;
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
  {
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x6Du,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    a2 = v35;
  }
  a2->IoStatus.Information = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options == 32;
  v33[0] = &v35;
  v33[1] = (PIRP *)&v36;
  v34 = 1;
  if ( !v7 )
  {
    v8 = -1073741306;
    v36 = -1073741306;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_94;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    v11 = 111;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_64;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( *(_QWORD *)&Parameters->CompletionMode != *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
    || *(_QWORD *)&Parameters->InboundQuota != *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
  {
    if ( *(_QWORD *)&Parameters->CompletionMode != SIDEBANDAUDIO_PARAMS_SET_USB_CONTROLLER
      || *(_QWORD *)&Parameters->InboundQuota != 0xD2609507174353B8uLL )
    {
      v8 = -1073741637;
      v36 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_94;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        9u,
        0x77u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
      goto LABEL_93;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v23 = 0;
    }
    if ( v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v23,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        9u,
        0x75u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    v24 = *((_QWORD *)this + 5);
    Length = CurrentStackLocation->Parameters.Read.Length;
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID, ULONG *))(pExtBusDeviceDispatchTable + 96))(
            Parameters->DefaultTimeout.LowPart,
            v24,
            v35->UserBuffer,
            &Length);
    v36 = v25;
    if ( (int)(v25 + 0x80000000) >= 0 && v25 != -1073741789 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v4,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v28,
          9u,
          0x76u,
          (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    }
    v21 = Length;
    goto LABEL_85;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v14 = 0;
  }
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x70u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  if ( !CSidebandDevice::IsValidEndpointIndex(this, Parameters->NamedPipeType) )
  {
    v8 = -1073741811;
    v36 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_94;
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      v29,
      0x71u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_93;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->NamedPipeType, &v30, &v32);
  v36 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v30, &v31);
    v36 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v18 = 115;
      goto LABEL_44;
    }
    Context = v31->Context;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v20 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, PVOID, ULONG *))(*(_QWORD *)(Context[18] + 128LL) + 88LL))(
            Parameters->DefaultTimeout.LowPart,
            v31,
            v35->UserBuffer,
            &Length);
    v21 = Length;
    v36 = v20;
    v22 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v22 )
    {
      v8 = -1073741789;
      v35->IoStatus.Information = Length;
      v36 = -1073741789;
      goto LABEL_94;
    }
    if ( v22 != Length )
    {
      v8 = -1073741811;
      v36 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_94;
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v11 = 116;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_64:
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)AttachedDevice,
        v4,
        v9,
        (__int64)DeviceExtension,
        v28,
        v29,
        v11,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_93:
      v8 = v36;
      goto LABEL_94;
    }
LABEL_85:
    v35->IoStatus.Information = v21;
    v26 = v36;
    scope_exit__lambda_3eb03d9b9151e7f3b9b0e59022a4a233____::_2_::scope_exit::_scope_exit(v33);
    return v26;
  }
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v4 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_45;
  v18 = 114;
LABEL_44:
  WPP_RECORDER_AND_TRACE_SF_d(
    (__int64)v16->AttachedDevice,
    v4,
    v17,
    (__int64)v16->DeviceExtension,
    v28,
    9u,
    v18,
    (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = v36;
LABEL_45:
  v8 = PinFromEpIndex;
LABEL_94:
  scope_exit__lambda_3eb03d9b9151e7f3b9b0e59022a4a233____::_2_::scope_exit::_scope_exit(v33);
  return v8;
}

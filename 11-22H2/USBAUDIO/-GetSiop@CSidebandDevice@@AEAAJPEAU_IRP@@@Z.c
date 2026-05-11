/*
 * XREFs of ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C00061A4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___ @ 0x1C0012CB4 (scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___.c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_ @ 0x1C0012CCC (_lambda_fc1b195165d1d50f985f4c2976c13440_--_lambda_fc1b195165d1d50f985f4c2976c13440_.c)
 *     _scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit @ 0x1C0012D94 (_scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____--_2_--scope_exit--_scope_exit.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::GetSiop(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // rdi
  char v7; // bl
  char v8; // r8
  void *v9; // rdx
  ULONG *v10; // r8
  struct _DEVICE_OBJECT *v11; // r10
  __int64 v12; // r11
  unsigned int v13; // edi
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int *p_NamedPipeType; // rsi
  __int64 v17; // rax
  CSidebandDevice *v18; // rcx
  int PinFromEpIndex; // eax
  int v20; // edx
  PDEVICE_OBJECT v21; // r10
  ULONG *v22; // r8
  _QWORD *Context; // r8
  int v24; // eax
  ULONG_PTR v25; // rcx
  ULONG v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  unsigned int v30; // ebx
  void *v32; // rdx
  int v33; // [rsp+20h] [rbp-79h]
  struct _KSPIN *v34; // [rsp+60h] [rbp-39h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v35; // [rsp+68h] [rbp-31h] BYREF
  __int128 v36; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v38[96]; // [rsp+90h] [rbp-9h] BYREF
  int v39; // [rsp+100h] [rbp+67h] BYREF
  struct _IRP *v40; // [rsp+108h] [rbp+6Fh] BYREF
  ULONG Length; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v42; // [rsp+118h] [rbp+7Fh] BYREF

  v40 = a2;
  v2 = *((_QWORD *)this + 4);
  v42 = -1;
  v3 = a2;
  v39 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v2 + 16);
  v35 = 0LL;
  v34 = 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
  {
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v8, WPP_GLOBAL_Control->DeviceExtension);
    v3 = v40;
  }
  v3->IoStatus.Information = 0LL;
  v36 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v37,
                     (__int64)&v40,
                     (__int64)&v39);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v38, &v36);
  if ( CurrentStackLocation->Parameters.Create.Options != 32 )
  {
    v13 = -1073741306;
    v39 = -1073741306;
    if ( WPP_GLOBAL_Control == v11
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
    if ( !v7 && *(_QWORD *)&WPP_RECORDER_INITIALIZED == v12 )
      goto LABEL_94;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_64;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v17 = *((_QWORD *)p_NamedPipeType + 1) - *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1;
  if ( !v17 )
    v17 = *((_QWORD *)p_NamedPipeType + 2) - *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4;
  if ( v17 )
  {
    v27 = *((_QWORD *)p_NamedPipeType + 1) - SIDEBANDAUDIO_PARAMS_SET_USB_CONTROLLER;
    if ( !v27 )
      v27 = *((_QWORD *)p_NamedPipeType + 2) + 0x2D9F6AF8E8BCAC48LL;
    if ( v27 )
    {
      v13 = -1073741637;
      v39 = -1073741637;
      if ( WPP_GLOBAL_Control == v11
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( !v7 && *(_QWORD *)&WPP_RECORDER_INITIALIZED == v12 )
        goto LABEL_94;
      v32 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
      LOBYTE(v32) = v7;
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v32,
        (_DWORD)v10,
        WPP_GLOBAL_Control->DeviceExtension);
      goto LABEL_93;
    }
    if ( WPP_GLOBAL_Control == v11
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v9,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12,
        WPP_GLOBAL_Control->DeviceExtension);
    v28 = *((_QWORD *)this + 4);
    Length = CurrentStackLocation->Parameters.Read.Length;
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID, ULONG *))(pExtBusDeviceDispatchTable + 96))(
            p_NamedPipeType[6],
            v28,
            v40->UserBuffer,
            &Length);
    v39 = v29;
    if ( (int)(v29 + 0x80000000) >= 0 && v29 != -1073741789 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v33,
          9u,
          0x76u,
          (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
    }
    v25 = Length;
    goto LABEL_85;
  }
  v18 = (CSidebandDevice *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == v11
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v9,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        v18,
                        (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                        *p_NamedPipeType) )
  {
    v13 = -1073741811;
    v39 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_94;
    LODWORD(v9) = 113;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    goto LABEL_64;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v42, &v35);
  v39 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v22 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    goto LABEL_44;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v42, &v34);
  v39 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    Context = v34->Context;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v24 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, PVOID, ULONG *))(*(_QWORD *)(Context[18] + 128LL) + 88LL))(
            p_NamedPipeType[6],
            v34,
            v40->UserBuffer,
            &Length);
    v25 = Length;
    v39 = v24;
    v26 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v26 )
    {
      v13 = -1073741789;
      v40->IoStatus.Information = Length;
      v39 = -1073741789;
      goto LABEL_94;
    }
    if ( v26 != Length )
    {
      v13 = -1073741811;
      v39 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      v10 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_94;
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v9 = &WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_64:
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_dd((_DWORD)AttachedDevice, (_DWORD)v9, (_DWORD)v10, (_DWORD)DeviceExtension);
LABEL_93:
      v13 = v39;
      goto LABEL_94;
    }
LABEL_85:
    v40->IoStatus.Information = v25;
    v30 = v39;
    scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit((__int64)v38);
    return v30;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  v22 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_45;
LABEL_44:
  LOBYTE(v20) = v7;
  WPP_RECORDER_AND_TRACE_SF_d(v21->AttachedDevice, v20, (_DWORD)v22, v21->DeviceExtension);
  PinFromEpIndex = v39;
LABEL_45:
  v13 = PinFromEpIndex;
LABEL_94:
  scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit((__int64)v38);
  return v13;
}

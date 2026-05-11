/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0017714
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C00061A4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___ @ 0x1C0012CB4 (scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___.c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_ @ 0x1C0012CCC (_lambda_fc1b195165d1d50f985f4c2976c13440_--_lambda_fc1b195165d1d50f985f4c2976c13440_.c)
 *     _scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____::_2_::scope_exit::_scope_exit @ 0x1C0012CFC (_scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit @ 0x1C0012D18 (_scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____--_2_--scope_exit--_scope_exit.c)
 *     PinSetDeviceState @ 0x1C0039A80 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rdi
  char v7; // bl
  char v8; // r8
  int v9; // edx
  CSidebandDevice *v10; // rcx
  int v11; // r8d
  __int64 v12; // r10
  unsigned int v13; // edi
  PDEVICE_OBJECT v14; // rcx
  unsigned int NamedPipeType; // esi
  int PinFromEpIndex; // eax
  int v17; // edx
  int v18; // r8d
  PDEVICE_OBJECT v19; // r10
  PKSPIN v20; // rsi
  int v21; // edx
  int v22; // r8d
  PDEVICE_OBJECT v23; // r10
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *p_Object; // [rsp+58h] [rbp-41h] BYREF
  char v27; // [rsp+60h] [rbp-39h]
  __int128 v28; // [rsp+70h] [rbp-29h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v30[96]; // [rsp+90h] [rbp-9h] BYREF
  int v31; // [rsp+100h] [rbp+67h] BYREF
  struct _IRP *v32; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+110h] [rbp+77h] BYREF
  PKSPIN Pin; // [rsp+118h] [rbp+7Fh] BYREF

  v32 = a2;
  v2 = *((_QWORD *)this + 4);
  v33 = -1;
  v3 = a2;
  v31 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v2 + 16);
  p_Object = 0LL;
  Pin = 0LL;
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
    v3 = v32;
  }
  v3->IoStatus.Information = 0LL;
  v28 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v29,
                     (__int64)&v32,
                     (__int64)&v31);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v30, &v28);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          v10,
                          (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                          NamedPipeType) )
    {
      v13 = -1073741811;
      v31 = -1073741811;
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      goto LABEL_78;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v9, v11, WPP_GLOBAL_Control->DeviceExtension);
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v33, &p_Object);
    v31 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      goto LABEL_41;
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v33, &Pin);
    v31 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
LABEL_41:
      LOBYTE(v17) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(v19->AttachedDevice, v17, v18, v19->DeviceExtension);
      PinFromEpIndex = v31;
LABEL_42:
      v13 = PinFromEpIndex;
      goto LABEL_78;
    }
    v20 = Pin;
    Object = KsPinGetParentFilter(Pin);
    KsAcquireControl(Object);
    v27 = 1;
    p_Object = (struct _KSPIN_DESCRIPTOR_EX *)&Object;
    v31 = PinSetDeviceState(v20, 1LL, 0LL);
    v13 = v31;
    if ( v31 >= 0 )
    {
      v31 = PinSetDeviceState(v20, 2LL, 1LL);
      v13 = v31;
      if ( v31 >= 0 )
      {
        v31 = PinSetDeviceState(v20, 3LL, 2LL);
        v13 = v31;
        if ( v31 >= 0 )
        {
          KsReleaseControl(Object);
          v27 = 0;
          goto LABEL_76;
        }
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
      }
      else
      {
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
      }
    }
    else
    {
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_77;
    }
    LOBYTE(v21) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(v23->AttachedDevice, v21, v22, v23->DeviceExtension);
LABEL_76:
    v13 = v31;
LABEL_77:
    scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit((__int64)&p_Object);
    goto LABEL_78;
  }
  v13 = -1073741306;
  v31 = -1073741306;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
  if ( v7 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 )
  {
LABEL_26:
    LOBYTE(v9) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd(v14->AttachedDevice, v9, v11, v14->DeviceExtension);
    v13 = v31;
  }
LABEL_78:
  scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____::_2_::scope_exit::_scope_exit((__int64)v30);
  return v13;
}

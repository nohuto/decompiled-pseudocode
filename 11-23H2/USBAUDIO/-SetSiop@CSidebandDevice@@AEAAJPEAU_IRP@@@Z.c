/*
 * XREFs of ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00166A8
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
 *     _scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit @ 0x1C0012DCC (_scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____--_2_--scope_exit--_scope_exit.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::SetSiop(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  char v7; // di
  char v8; // r8
  int v9; // edx
  CSidebandDevice *v10; // rcx
  int v11; // r8d
  __int64 v12; // r10
  unsigned int v13; // ebx
  PDEVICE_OBJECT v14; // rcx
  unsigned int *p_NamedPipeType; // rsi
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  PDEVICE_OBJECT v19; // rcx
  struct _KSPIN *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  struct _KSPIN_DESCRIPTOR_EX *v24; // [rsp+50h] [rbp-39h] BYREF
  __int128 v25; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v27[96]; // [rsp+80h] [rbp-9h] BYREF
  int PinFromEpIndex; // [rsp+F0h] [rbp+67h] BYREF
  struct _IRP *v29; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v30; // [rsp+100h] [rbp+77h] BYREF
  struct _KSPIN *v31; // [rsp+108h] [rbp+7Fh] BYREF

  v29 = a2;
  v2 = *((_QWORD *)this + 4);
  v30 = -1;
  v3 = a2;
  PinFromEpIndex = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v2 + 16);
  v24 = 0LL;
  v31 = 0LL;
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
    v3 = v29;
  }
  v3->IoStatus.Information = 0LL;
  v25 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v26,
                     (__int64)&v29,
                     (__int64)&PinFromEpIndex);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v27, &v25);
  if ( CurrentStackLocation->Parameters.Create.Options < 0x20 )
  {
    v13 = -1073741811;
    PinFromEpIndex = -1073741811;
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
    if ( v7 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 )
      goto LABEL_18;
    goto LABEL_69;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        v10,
                        (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                        *p_NamedPipeType) )
  {
    v13 = -1073741811;
    PinFromEpIndex = -1073741811;
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 123;
LABEL_18:
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_dd(v14->AttachedDevice, v9, v11, v14->DeviceExtension);
LABEL_68:
      v13 = PinFromEpIndex;
      goto LABEL_69;
    }
    goto LABEL_69;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v16, v11, WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v30, &v24);
  v13 = PinFromEpIndex;
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
      goto LABEL_69;
    goto LABEL_67;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v30, &v31);
  v13 = PinFromEpIndex;
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
      goto LABEL_69;
    goto LABEL_67;
  }
  v20 = v31;
  v21 = *((_QWORD *)p_NamedPipeType + 1) - *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1;
  v22 = *(_QWORD *)(*((_QWORD *)v31->Context + 18) + 128LL);
  if ( !v21 )
    v21 = *((_QWORD *)p_NamedPipeType + 2) - *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4;
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, unsigned int *, _QWORD))(v22 + 96))(
            p_NamedPipeType[6],
            v20,
            p_NamedPipeType + 8,
            p_NamedPipeType[7]);
    PinFromEpIndex = v13;
    goto LABEL_69;
  }
  v13 = -1073741637;
  PinFromEpIndex = -1073741637;
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_67:
    LOBYTE(v17) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(v19->AttachedDevice, v17, v18, v19->DeviceExtension);
    goto LABEL_68;
  }
LABEL_69:
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit((__int64)v27);
  return v13;
}

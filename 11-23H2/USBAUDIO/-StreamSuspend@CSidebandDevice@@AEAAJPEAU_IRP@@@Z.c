/*
 * XREFs of ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0005CA4
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
 *     _scope_exit__lambda_54b590da5451504ad188b607302821f2____::_2_::scope_exit::_scope_exit @ 0x1C0012D40 (_scope_exit__lambda_54b590da5451504ad188b607302821f2____--_2_--scope_exit--_scope_exit.c)
 *     PinSetDeviceState @ 0x1C0039A80 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamSuspend(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rdi
  char v7; // bl
  char v8; // r8
  __int64 v9; // rdx
  CSidebandDevice *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  unsigned int v13; // edi
  PDEVICE_OBJECT v14; // rcx
  unsigned int NamedPipeType; // esi
  int PinFromEpIndex; // eax
  PDEVICE_OBJECT v17; // r10
  PKSPIN v18; // rdi
  PKSFILTER ParentFilter; // rsi
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  struct _KSPIN_DESCRIPTOR_EX *v27; // [rsp+50h] [rbp-39h] BYREF
  __int128 v28; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v29[16]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v30[96]; // [rsp+80h] [rbp-9h] BYREF
  int v31; // [rsp+F0h] [rbp+67h] BYREF
  struct _IRP *v32; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+100h] [rbp+77h] BYREF
  PKSPIN Pin; // [rsp+108h] [rbp+7Fh] BYREF

  v32 = a2;
  v2 = *((_QWORD *)this + 4);
  v33 = -1;
  v3 = a2;
  v31 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v2 + 16);
  v27 = 0LL;
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
  v28 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(v29, &v32, &v31);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_(v30, &v28);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(v10, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), NamedPipeType) )
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
        goto LABEL_18;
      goto LABEL_77;
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
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v33, &v27);
    v31 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v33, &Pin);
      v31 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v18 = Pin;
        ParentFilter = KsPinGetParentFilter(Pin);
        KsAcquireControl(ParentFilter);
        v31 = PinSetDeviceState(v18, 2LL, 3LL);
        if ( v31 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v20) = 0;
          }
          if ( (_BYTE)v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v21,
              WPP_GLOBAL_Control->DeviceExtension);
          }
        }
        v31 = PinSetDeviceState(v18, 1LL, 2LL);
        if ( v31 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              WPP_GLOBAL_Control->DeviceExtension);
          }
        }
        v31 = PinSetDeviceState(v18, 0LL, 1LL);
        if ( v31 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v7 = 0;
          }
          if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = v7;
            LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              v25,
              WPP_GLOBAL_Control->DeviceExtension);
          }
        }
        KsReleaseControl(ParentFilter);
        goto LABEL_76;
      }
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    else
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    LOBYTE(v9) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(v17->AttachedDevice, v9, v11, v17->DeviceExtension);
    PinFromEpIndex = v31;
LABEL_42:
    v13 = PinFromEpIndex;
    goto LABEL_77;
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
LABEL_18:
    LOBYTE(v9) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd(v14->AttachedDevice, v9, v11, v14->DeviceExtension);
LABEL_76:
    v13 = v31;
  }
LABEL_77:
  scope_exit__lambda_54b590da5451504ad188b607302821f2____::_2_::scope_exit::_scope_exit(v30, v9, v11);
  return v13;
}

/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015C84
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BDC4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_ec8ee43d1237a566b316bc4a39e5be24____::_2_::scope_exit::_scope_exit @ 0x1C0011660 (_scope_exit__lambda_ec8ee43d1237a566b316bc4a39e5be24____--_2_--scope_exit--_scope_exit.c)
 *     PinSetDeviceState @ 0x1C002BAE0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v4; // bl
  char v5; // al
  char v6; // r8
  bool v7; // zf
  unsigned int v8; // edi
  unsigned int NamedPipeType; // esi
  char v10; // dl
  int PinFromEpIndex; // eax
  PDEVICE_OBJECT v12; // r10
  char v13; // r8
  unsigned __int16 v14; // cx
  PKSPIN v15; // r14
  PKSFILTER ParentFilter; // rdi
  unsigned int v17; // esi
  PDEVICE_OBJECT v18; // r10
  char v19; // r8
  unsigned __int16 v20; // ax
  int v22; // [rsp+20h] [rbp-60h]
  int v23; // [rsp+28h] [rbp-58h]
  PKSPIN Pin; // [rsp+50h] [rbp-30h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+58h] [rbp-28h] BYREF
  PIRP *v26[2]; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+78h] [rbp-8h]
  struct _IRP *v28; // [rsp+C8h] [rbp+48h] BYREF
  int v29; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+58h] BYREF

  v28 = a2;
  v30 = -1;
  v29 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v25 = 0LL;
  Pin = 0LL;
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
      v22,
      9u,
      0x4Eu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    a2 = v28;
  }
  a2->IoStatus.Information = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options == 4;
  v26[0] = &v28;
  v26[1] = (PIRP *)&v29;
  v27 = 1;
  if ( v7 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      v8 = -1073741811;
      v29 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        v23,
        0x51u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_80:
      v8 = v29;
      goto LABEL_81;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        9u,
        0x52u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v30, &v25);
    v29 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v14 = 83;
LABEL_43:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v12->AttachedDevice,
        v4,
        v13,
        (__int64)v12->DeviceExtension,
        v22,
        9u,
        v14,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
      PinFromEpIndex = v29;
LABEL_44:
      v8 = PinFromEpIndex;
      goto LABEL_81;
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v30, &Pin);
    v29 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v14 = 84;
      goto LABEL_43;
    }
    v15 = Pin;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsAcquireControl(ParentFilter);
    v29 = PinSetDeviceState(v15, 1LL, 0LL);
    v17 = v29;
    if ( v29 >= 0 )
    {
      v29 = PinSetDeviceState(v15, 2LL, 1LL);
      v17 = v29;
      if ( v29 >= 0 )
      {
        v29 = PinSetDeviceState(v15, 3LL, 2LL);
        v17 = v29;
        if ( v29 >= 0 )
        {
          KsReleaseControl(ParentFilter);
          goto LABEL_80;
        }
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v4 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_62:
          KsReleaseControl(ParentFilter);
          v8 = v17;
          goto LABEL_81;
        }
        v20 = 87;
      }
      else
      {
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v4 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
        v20 = 86;
      }
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v20 = 85;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v18->AttachedDevice,
      v4,
      v19,
      (__int64)v18->DeviceExtension,
      v22,
      9u,
      v20,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    v17 = v29;
    goto LABEL_62;
  }
  v8 = -1073741306;
  v29 = -1073741306;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      v23,
      0x50u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_80;
  }
LABEL_81:
  scope_exit__lambda_ec8ee43d1237a566b316bc4a39e5be24____::_2_::scope_exit::_scope_exit(v26);
  return v8;
}

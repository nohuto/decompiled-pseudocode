/*
 * XREFs of ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BDC4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_f054f0e5d93f9db412eec2b5207fa3fc____::_2_::scope_exit::_scope_exit @ 0x1C001172C (_scope_exit__lambda_f054f0e5d93f9db412eec2b5207fa3fc____--_2_--scope_exit--_scope_exit.c)
 *     PinSetDeviceState @ 0x1C002BAE0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamSuspend(CSidebandDevice *this, struct _IRP *a2)
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
  PKSPIN v15; // rdi
  PKSFILTER ParentFilter; // rsi
  char v17; // dl
  char v18; // dl
  int v20; // [rsp+20h] [rbp-60h]
  int v21; // [rsp+28h] [rbp-58h]
  PKSPIN Pin; // [rsp+50h] [rbp-30h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+58h] [rbp-28h] BYREF
  PIRP *v24[2]; // [rsp+68h] [rbp-18h] BYREF
  char v25; // [rsp+78h] [rbp-8h]
  struct _IRP *v26; // [rsp+C8h] [rbp+48h] BYREF
  int v27; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+58h] BYREF

  v26 = a2;
  v28 = -1;
  v27 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
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
      v20,
      9u,
      0x58u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    a2 = v26;
  }
  a2->IoStatus.Information = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options == 4;
  v24[0] = &v26;
  v24[1] = (PIRP *)&v27;
  v25 = 1;
  if ( !v7 )
  {
    v8 = -1073741306;
    v27 = -1073741306;
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
        v20,
        v21,
        0x5Au,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_77:
      v8 = v27;
      goto LABEL_78;
    }
    goto LABEL_78;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
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
        v20,
        9u,
        0x5Cu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v28, &v23);
    v27 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v28, &Pin);
      v27 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v15 = Pin;
        ParentFilter = KsPinGetParentFilter(Pin);
        KsAcquireControl(ParentFilter);
        v27 = PinSetDeviceState(v15, 2LL, 3LL);
        if ( v27 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v17 = 0;
          }
          if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v17,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v20,
              9u,
              0x5Fu,
              (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
        }
        v27 = PinSetDeviceState(v15, 1LL, 2LL);
        if ( v27 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v18 = 0;
          }
          if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v18,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v20,
              9u,
              0x60u,
              (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
        }
        v27 = PinSetDeviceState(v15, 0LL, 1LL);
        if ( v27 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v4 = 0;
          }
          if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v4,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v20,
              9u,
              0x61u,
              (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
        }
        KsReleaseControl(ParentFilter);
        goto LABEL_77;
      }
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v14 = 94;
    }
    else
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
        goto LABEL_43;
      v14 = 93;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v12->AttachedDevice,
      v4,
      v13,
      (__int64)v12->DeviceExtension,
      v20,
      9u,
      v14,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    PinFromEpIndex = v27;
LABEL_43:
    v8 = PinFromEpIndex;
    goto LABEL_78;
  }
  v8 = -1073741811;
  v27 = -1073741811;
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
      v20,
      v21,
      0x5Bu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_77;
  }
LABEL_78:
  scope_exit__lambda_f054f0e5d93f9db412eec2b5207fa3fc____::_2_::scope_exit::_scope_exit(v24);
  return v8;
}

/*
 * XREFs of ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014C8C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BDC4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_89047d66552267e9689c03bfb9194dd4____::_2_::scope_exit::_scope_exit @ 0x1C00114C8 (_scope_exit__lambda_89047d66552267e9689c03bfb9194dd4____--_2_--scope_exit--_scope_exit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::SetSiop(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v4; // bl
  char v5; // al
  char v6; // r8
  bool v7; // cf
  unsigned int v8; // edi
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  char v10; // dl
  PDEVICE_OBJECT v11; // rcx
  char v12; // r8
  unsigned __int16 v13; // ax
  struct _KSPIN *v14; // rdi
  __int64 v15; // r14
  unsigned int v16; // ebx
  int v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-58h]
  struct _KSPIN *v20; // [rsp+50h] [rbp-30h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v21; // [rsp+58h] [rbp-28h] BYREF
  PIRP *v22[2]; // [rsp+60h] [rbp-20h] BYREF
  char v23; // [rsp+70h] [rbp-10h]
  struct _IRP *v24; // [rsp+C8h] [rbp+48h] BYREF
  int PinFromEpIndex; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+58h] BYREF

  v24 = a2;
  v26 = -1;
  PinFromEpIndex = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0LL;
  v20 = 0LL;
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
      v18,
      9u,
      0x78u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    a2 = v24;
  }
  a2->IoStatus.Information = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options < 0x20;
  v22[0] = &v24;
  v22[1] = (PIRP *)&PinFromEpIndex;
  v23 = 1;
  if ( v7 )
  {
    v8 = -1073741811;
    PinFromEpIndex = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x7Au,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_69:
    v8 = PinFromEpIndex;
LABEL_70:
    scope_exit__lambda_89047d66552267e9689c03bfb9194dd4____::_2_::scope_exit::_scope_exit(v22);
    return v8;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, Parameters->NamedPipeType) )
  {
    v8 = -1073741811;
    PinFromEpIndex = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x7Bu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_69;
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
      v18,
      9u,
      0x7Cu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->NamedPipeType, &v26, &v21);
  v8 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    v13 = 125;
    goto LABEL_68;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v26, &v20);
  v8 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    v13 = 126;
    goto LABEL_68;
  }
  v14 = v20;
  v15 = *(_QWORD *)(*((_QWORD *)v20->Context + 18) + 128LL);
  if ( *(_QWORD *)&Parameters->CompletionMode != *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
    || *(_QWORD *)&Parameters->InboundQuota != *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
  {
    v8 = -1073741637;
    PinFromEpIndex = -1073741637;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    v13 = 128;
LABEL_68:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v11->AttachedDevice,
      v4,
      v12,
      (__int64)v11->DeviceExtension,
      v18,
      9u,
      v13,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_69;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      9u,
      0x7Fu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, BOOLEAN *, _QWORD))(v15 + 96))(
                     Parameters->DefaultTimeout.LowPart,
                     v14,
                     &Parameters->TimeoutSpecified,
                     (unsigned int)Parameters->DefaultTimeout.HighPart);
  v16 = PinFromEpIndex;
  scope_exit__lambda_89047d66552267e9689c03bfb9194dd4____::_2_::scope_exit::_scope_exit(v22);
  return v16;
}

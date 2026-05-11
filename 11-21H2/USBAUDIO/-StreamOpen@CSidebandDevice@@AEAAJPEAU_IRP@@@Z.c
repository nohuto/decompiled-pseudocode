/*
 * XREFs of ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159C4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C00094E0 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_0afe05fec85482081db6025312a59336____::_2_::scope_exit::_scope_exit @ 0x1C0011264 (_scope_exit__lambda_0afe05fec85482081db6025312a59336____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::StreamOpen(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v4; // bl
  char v5; // al
  char v6; // r8
  bool v7; // zf
  unsigned int v8; // edi
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  char v10; // dl
  int v11; // eax
  int v13; // [rsp+20h] [rbp-50h]
  int v14; // [rsp+28h] [rbp-48h]
  PIRP *v15[2]; // [rsp+50h] [rbp-20h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  struct _IRP *v17; // [rsp+B8h] [rbp+48h] BYREF
  int v18; // [rsp+C0h] [rbp+50h] BYREF
  struct _KSPIN *v19; // [rsp+C8h] [rbp+58h] BYREF

  v17 = a2;
  v18 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
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
      v13,
      9u,
      0x48u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    a2 = v17;
  }
  a2->IoStatus.Information = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options == 24;
  v15[0] = &v17;
  v15[1] = (PIRP *)&v18;
  v16 = 1;
  if ( v7 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( CSidebandDevice::IsValidEndpointIndex(this, Parameters->NamedPipeType) )
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
          v13,
          9u,
          0x4Cu,
          (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
      v11 = CSidebandDevice::CreateKsPin(
              this,
              Parameters->NamedPipeType,
              *(union KSDATAFORMAT **)&Parameters->CompletionMode,
              &v19);
      v18 = v11;
      if ( v11 < 0 )
      {
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
            v13,
            v14,
            0x4Du,
            (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
          v11 = v18;
        }
      }
      v8 = v11;
    }
    else
    {
      v8 = -1073741811;
      v18 = -1073741811;
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
          v13,
          v14,
          0x4Bu,
          (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
        goto LABEL_27;
      }
    }
  }
  else
  {
    v8 = -1073741306;
    v18 = -1073741306;
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
        v13,
        v14,
        0x4Au,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_27:
      v8 = v18;
    }
  }
  scope_exit__lambda_0afe05fec85482081db6025312a59336____::_2_::scope_exit::_scope_exit(v15);
  return v8;
}

/*
 * XREFs of ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001740C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000C680 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___ @ 0x1C0012CB4 (scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___.c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_ @ 0x1C0012CCC (_lambda_fc1b195165d1d50f985f4c2976c13440_--_lambda_fc1b195165d1d50f985f4c2976c13440_.c)
 *     _scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit @ 0x1C0012CE0 (_scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::StreamOpen(CSidebandDevice *this, struct _IRP *a2)
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
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v23[80]; // [rsp+70h] [rbp+7h] BYREF
  int v24; // [rsp+D0h] [rbp+67h] BYREF
  struct _IRP *v25; // [rsp+D8h] [rbp+6Fh] BYREF
  struct _KSPIN *v26; // [rsp+E0h] [rbp+77h] BYREF

  v25 = a2;
  v2 = *((_QWORD *)this + 4);
  v24 = 0;
  v3 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v26 = 0LL;
  v6 = *(_QWORD *)(v2 + 16);
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
    v3 = v25;
  }
  v3->IoStatus.Information = 0LL;
  v21 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v22,
                     (__int64)&v25,
                     (__int64)&v24);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v23, &v21);
  if ( CurrentStackLocation->Parameters.Create.Options == 24 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( (unsigned int)CSidebandDevice::IsValidEndpointIndex(
                         v10,
                         (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                         Parameters->NamedPipeType) )
    {
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
      v17 = CSidebandDevice::CreateKsPin(
              this,
              Parameters->NamedPipeType,
              *(union KSDATAFORMAT **)&Parameters->CompletionMode,
              &v26);
      v24 = v17;
      if ( v17 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = v7;
          LOBYTE(v19) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            WPP_GLOBAL_Control->DeviceExtension);
          v17 = v24;
        }
      }
      v13 = v17;
    }
    else
    {
      v13 = -1073741811;
      v24 = -1073741811;
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
        v9 = 75;
LABEL_27:
        LOBYTE(v9) = v7;
        WPP_RECORDER_AND_TRACE_SF_dd(v14->AttachedDevice, v9, v11, v14->DeviceExtension);
        v13 = v24;
      }
    }
  }
  else
  {
    v13 = -1073741306;
    v24 = -1073741306;
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12;
    if ( v7 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 )
      goto LABEL_27;
  }
  scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit((__int64)v23);
  return v13;
}

/*
 * XREFs of ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00170B0
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
 *     _scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____::_2_::scope_exit::_scope_exit @ 0x1C0012D78 (_scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::StreamClose(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rdi
  char v6; // bl
  char v7; // r8
  int v8; // edx
  CSidebandDevice *v9; // rcx
  int v10; // r8d
  __int64 v11; // r9
  unsigned int v12; // edi
  PDEVICE_OBJECT v13; // rcx
  unsigned int NamedPipeType; // esi
  int PinFromEpIndex; // eax
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // r10
  struct _KSPIN_DESCRIPTOR_EX *v20; // [rsp+50h] [rbp-39h] BYREF
  __int128 v21; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v23[96]; // [rsp+80h] [rbp-9h] BYREF
  int v24; // [rsp+F0h] [rbp+67h] BYREF
  struct _IRP *v25; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v26; // [rsp+100h] [rbp+77h] BYREF
  struct _KSPIN *v27; // [rsp+108h] [rbp+7Fh] BYREF

  v25 = a2;
  v2 = *((_QWORD *)this + 4);
  v26 = -1;
  v24 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(v2 + 16);
  a2->IoStatus.Information = 0LL;
  v20 = 0LL;
  v27 = 0LL;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v7, WPP_GLOBAL_Control->DeviceExtension);
  v21 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v22,
                     (__int64)&v25,
                     (__int64)&v24);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v23, &v21);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          v9,
                          (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                          NamedPipeType) )
    {
      v12 = -1073741811;
      v24 = -1073741811;
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v8, v10, WPP_GLOBAL_Control->DeviceExtension);
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v26, &v20);
    v24 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v26, &v27);
      v24 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        ObfDereferenceObject(*((PVOID *)v27->Context + 6));
        goto LABEL_52;
      }
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    LOBYTE(v16) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(v18->AttachedDevice, v16, v17, v18->DeviceExtension);
    PinFromEpIndex = v24;
LABEL_42:
    v12 = PinFromEpIndex;
    goto LABEL_53;
  }
  v12 = -1073741306;
  v24 = -1073741306;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v6 = 0;
  }
  LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v11;
  if ( v6 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v11 )
  {
LABEL_18:
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_dd(v13->AttachedDevice, v8, v10, v13->DeviceExtension);
LABEL_52:
    v12 = v24;
  }
LABEL_53:
  scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____::_2_::scope_exit::_scope_exit((__int64)v23);
  return v12;
}

/*
 * XREFs of ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133C8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x1C000EC98 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z.c)
 *     scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___ @ 0x1C0012CB4 (scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___.c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_ @ 0x1C0012CCC (_lambda_fc1b195165d1d50f985f4c2976c13440_--_lambda_fc1b195165d1d50f985f4c2976c13440_.c)
 *     _scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____::_2_::scope_exit::_scope_exit @ 0x1C0012DB0 (_scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v3; // r14
  char v4; // bl
  char v5; // r8
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  ULONG Length; // ecx
  unsigned int v10; // edi
  PDEVICE_OBJECT v11; // rcx
  int NumberOfEndpointsInDevice; // eax
  ULONG *v13; // rdx
  __int128 v15; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v17[32]; // [rsp+78h] [rbp+17h] BYREF
  int v18; // [rsp+C8h] [rbp+67h] BYREF
  struct _IRP *v19; // [rsp+D0h] [rbp+6Fh] BYREF

  v19 = a2;
  v18 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v5, WPP_GLOBAL_Control->DeviceExtension);
  v15 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v16,
                     (__int64)&v19,
                     (__int64)&v18);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v17, &v15);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 4 )
    {
      NumberOfEndpointsInDevice = CSidebandDevice::GetNumberOfEndpointsInDevice(
                                    (struct _KSFILTER_DESCRIPTOR *)(v3 + 128),
                                    (unsigned int *)v19->UserBuffer);
      v18 = NumberOfEndpointsInDevice;
      if ( NumberOfEndpointsInDevice >= 0 )
      {
        v19->IoStatus.Information = 4LL;
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v4 = 0;
        }
        LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v6 = 15;
        goto LABEL_43;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      v13 = &WPP_RECORDER_INITIALIZED;
      if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v4;
        LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v13,
          v7,
          WPP_GLOBAL_Control->DeviceExtension);
        NumberOfEndpointsInDevice = v18;
      }
      v10 = NumberOfEndpointsInDevice;
    }
    else
    {
      v10 = -1073741306;
      v18 = -1073741306;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v4 = 0;
      }
      if ( v4 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v8 )
      {
        LOBYTE(v6) = v4;
        LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v8;
        WPP_RECORDER_AND_TRACE_SF_dd(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
LABEL_44:
        v10 = v18;
      }
    }
  }
  else
  {
    v10 = -1073741789;
    v19->IoStatus.Information = 4LL;
    v18 = -1073741789;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != v8;
    if ( v4 || *(_QWORD *)&WPP_RECORDER_INITIALIZED != v8 )
    {
LABEL_43:
      LOBYTE(v6) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(v11->AttachedDevice, v6, v7, v11->DeviceExtension);
      goto LABEL_44;
    }
  }
  scope_exit__lambda_9941f52df6e4fe84e0488a5695633101____::_2_::scope_exit::_scope_exit((__int64)v17);
  return v10;
}

/*
 * XREFs of ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00118C4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000BA58 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 *     _scope_exit__lambda_1ebf6f6b85ec5e939ee350b3cee7967f____::_2_::scope_exit::_scope_exit @ 0x1C0011330 (_scope_exit__lambda_1ebf6f6b85ec5e939ee350b3cee7967f____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v4; // bl
  char v5; // dl
  char v6; // r8
  ULONG Length; // eax
  unsigned int v8; // edi
  PDEVICE_OBJECT v9; // rcx
  char v10; // r8
  int v12; // [rsp+20h] [rbp-50h]
  int v13; // [rsp+28h] [rbp-48h]
  unsigned __int16 v14; // [rsp+30h] [rbp-40h]
  PIRP *v15[2]; // [rsp+50h] [rbp-20h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  struct _IRP *v17; // [rsp+A8h] [rbp+38h] BYREF
  int NumberOfEndpointsInDevice; // [rsp+B0h] [rbp+40h] BYREF

  v17 = a2;
  NumberOfEndpointsInDevice = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
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
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0xAu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  v16 = 1;
  v15[0] = &v17;
  v15[1] = (PIRP *)&NumberOfEndpointsInDevice;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 4 )
    {
      NumberOfEndpointsInDevice = CSidebandDevice::GetNumberOfEndpointsInDevice(this, (unsigned int *)v17->UserBuffer);
      v8 = NumberOfEndpointsInDevice;
      if ( NumberOfEndpointsInDevice >= 0 )
      {
        v17->IoStatus.Information = 4LL;
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v4 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v14 = 15;
      }
      else
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v4 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v14 = 14;
      }
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v9->AttachedDevice,
        v4,
        v10,
        (__int64)v9->DeviceExtension,
        v12,
        9u,
        v14,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
      goto LABEL_43;
    }
    v8 = -1073741306;
    NumberOfEndpointsInDevice = -1073741306;
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
        v12,
        v13,
        0xDu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
      goto LABEL_43;
    }
  }
  else
  {
    v8 = -1073741789;
    v17->IoStatus.Information = 4LL;
    NumberOfEndpointsInDevice = -1073741789;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        9u,
        0xCu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_43:
      v8 = NumberOfEndpointsInDevice;
    }
  }
LABEL_44:
  scope_exit__lambda_1ebf6f6b85ec5e939ee350b3cee7967f____::_2_::scope_exit::_scope_exit(v15);
  return v8;
}

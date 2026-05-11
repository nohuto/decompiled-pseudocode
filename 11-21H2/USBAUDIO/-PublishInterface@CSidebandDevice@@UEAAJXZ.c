/*
 * XREFs of ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1C000EA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::PublishInterface(CSidebandDevice *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  struct _UNICODE_STRING *v5; // rsi
  NTSTATUS v6; // edi
  char v7; // dl
  char v8; // r8
  PVOID DeviceExtension; // r9
  unsigned __int16 v10; // ax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  char v12; // dl
  char v13; // dl
  int v15; // [rsp+20h] [rbp-58h]

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0x14u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v5 = (struct _UNICODE_STRING *)((char *)this + 56);
  v6 = IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 5) + 32LL),
         &GUID_DEVINTERFACE_USB_SIDEBAND_AUDIO_HS_HCIBYPASS,
         (PUNICODE_STRING)&ReferenceString,
         (PUNICODE_STRING)((char *)this + 56));
  if ( v6 >= 0 )
  {
    v6 = IoSetDeviceInterfaceState(v5, 1u);
    if ( v6 >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v12 = 0;
      }
      if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v12,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          9u,
          0x17u,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v7 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v10 = 22;
        AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
        goto LABEL_19;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v10 = 21;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_19:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)AttachedDevice,
        v7,
        v8,
        (__int64)DeviceExtension,
        v15,
        9u,
        v10,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v13 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v13 || v2 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v2,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0x18u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v6;
}

/*
 * XREFs of ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C000E724
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A2F4 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IsFeedbackSupported(CSidebandDevice *this, struct _KSDEVICE *a2, int a3, int *a4)
{
  int v7; // r14d
  __int64 v8; // rsi
  char v9; // bl
  char v10; // dl
  char v11; // r8
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r9
  char v18; // dl
  char v20; // dl
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+90h] [rbp+18h] BYREF

  v22 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL);
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x35u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  v12 = *(_DWORD *)(v8 + 164);
  v13 = 0;
  v14 = *(_QWORD *)(v8 + 168);
  v15 = (unsigned int)(a3 * v12);
  v16 = (unsigned int)v15;
  if ( *(_DWORD *)(v15 + v14 + 48) )
  {
    v17 = *(_QWORD *)(v15 + v14 + 56);
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(struct _KSDEVICE *, _QWORD, int *))(pExtBusDeviceDispatchTable + 88))(
             a2,
             *(_QWORD *)(v17 + 8LL * v13),
             &v22);
      if ( v7 < 0 )
        break;
      if ( v22 )
      {
        *a4 = 1;
        goto LABEL_16;
      }
      v17 = *(_QWORD *)(v16 + v14 + 56);
      v13 += ((*(_DWORD *)(*(_QWORD *)(v17 + 8LL * v13) + 4LL) & 2) != 0) + 1;
      if ( v13 >= *(_DWORD *)(v16 + v14 + 48) )
        goto LABEL_16;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v20 = 0;
    }
    if ( v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        9u,
        0x36u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
LABEL_16:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v18 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( v18 || v9 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v18,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x37u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v7;
}

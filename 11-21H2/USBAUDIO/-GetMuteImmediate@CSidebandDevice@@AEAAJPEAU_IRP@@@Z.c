/*
 * XREFs of ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ACF0
 * Callers:
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012680 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     PropertyGetBooleanSideband @ 0x1C002EA24 (PropertyGetBooleanSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMuteImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v4; // rax
  __int64 v5; // r14
  char v6; // di
  char v7; // dl
  char v8; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int PinFromEpIndex; // ebx
  unsigned int *p_NamedPipeType; // r13
  char v12; // dl
  char v14; // dl
  char v15; // dl
  unsigned int v16; // r12d
  PDEVICE_OBJECT v17; // rcx
  char v18; // dl
  char v19; // r8
  unsigned __int16 v20; // ax
  char v21; // dl
  unsigned int v22; // ebx
  __int64 v23; // rsi
  struct _IRP *v24; // r14
  PVOID UserBuffer; // rbx
  int v26; // ecx
  char v27; // dl
  int v28; // [rsp+20h] [rbp-58h]
  unsigned int v29; // [rsp+60h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v30; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+48h] BYREF
  struct _IRP *v32; // [rsp+C8h] [rbp+50h]
  unsigned int v33; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+60h] BYREF

  v32 = a2;
  v33 = -1;
  v31 = -1;
  v34 = -1;
  v4 = *((_QWORD *)this + 5);
  v30 = 0LL;
  v29 = 0;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v7 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( v7 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x77u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    PinFromEpIndex = -1073741306;
    goto LABEL_15;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v14 = 0;
  }
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x78u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v33, &v30);
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v15 = 0;
    }
    if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        9u,
        0x79u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_15;
  }
  v16 = v33;
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v5 + 128), v33, &v31);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                       this,
                       v31,
                       v16,
                       (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                       &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                       &v34);
    if ( PinFromEpIndex >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v21 = 0;
      }
      v22 = v34;
      if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v21,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v28,
          9u,
          0x7Cu,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
      v23 = *(_QWORD *)(v5 + 200) + v22 * *(_DWORD *)(v5 + 196);
      if ( CurrentStackLocation->Parameters.Read.Length != 16 )
      {
        PinFromEpIndex = -1073741306;
        goto LABEL_15;
      }
      v24 = v32;
      UserBuffer = v32->UserBuffer;
      memmove(UserBuffer, p_NamedPipeType, 0x10uLL);
      PinFromEpIndex = PropertyGetBooleanSideband(
                         v26,
                         v23,
                         (unsigned int)&v29,
                         p_NamedPipeType[2],
                         (__int64)UserBuffer + 12);
      if ( PinFromEpIndex >= 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v27 = 0;
        }
        if ( v27 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v27,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v28,
            9u,
            0x7Eu,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        v24->IoStatus.Information = v29;
      }
      else
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = 125;
          goto LABEL_49;
        }
      }
    }
    else
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v18 = 0;
      }
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = 123;
        goto LABEL_49;
      }
    }
  }
  else
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v18 = 0;
    }
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v20 = 122;
LABEL_49:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v17->AttachedDevice,
        v18,
        v19,
        (__int64)v17->DeviceExtension,
        v28,
        9u,
        v20,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
LABEL_15:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( v12 || v6 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x7Fu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

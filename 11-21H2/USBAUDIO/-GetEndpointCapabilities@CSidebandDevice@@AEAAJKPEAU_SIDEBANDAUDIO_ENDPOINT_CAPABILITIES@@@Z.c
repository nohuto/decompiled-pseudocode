/*
 * XREFs of ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A2F4
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C000E724 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointCapabilities(
        CSidebandDevice *this,
        unsigned int a2,
        struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *a3)
{
  struct _KSFILTER_DESCRIPTOR *v6; // rsi
  char v7; // bl
  char v8; // dl
  char v9; // r8
  int BridgePinForDataPin; // edi
  unsigned int v11; // edi
  int NodeOfType; // eax
  char v13; // dl
  char v14; // dl
  int v15; // eax
  char v16; // dl
  char v17; // dl
  int SidetoneNodes; // eax
  char v19; // dl
  char v20; // dl
  int v21; // ecx
  PDEVICE_OBJECT v22; // rcx
  char v23; // dl
  char v24; // r8
  unsigned __int16 v25; // ax
  char v26; // dl
  int v28; // [rsp+20h] [rbp-50h]
  int v29; // [rsp+20h] [rbp-50h]
  int v30; // [rsp+20h] [rbp-50h]
  int v31; // [rsp+20h] [rbp-50h]
  int v32; // [rsp+28h] [rbp-48h]
  int v33; // [rsp+28h] [rbp-48h]
  unsigned int v34; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-Ch] BYREF
  unsigned int v36; // [rsp+68h] [rbp-8h] BYREF
  int v37; // [rsp+6Ch] [rbp-4h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+58h] BYREF

  v6 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 128LL);
  v38 = -1;
  v39 = -1;
  v37 = 0;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v28,
      9u,
      0x3Au,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  BridgePinForDataPin = CSidebandDevice::GetBridgePinForDataPin(this, v6, a2, &v38);
  if ( BridgePinForDataPin < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        9u,
        0x3Bu,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    return (unsigned int)BridgePinForDataPin;
  }
  v11 = v38;
  NodeOfType = CSidebandDevice::GetNodeOfType(this, v38, a2, v6, &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1, &v39);
  if ( NodeOfType < 0 )
  {
    if ( NodeOfType == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v14 = 0;
      }
      if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v29,
          v32,
          0x3Du,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
  else
  {
    a3->Volume = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v29,
        9u,
        0x3Cu,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  v15 = CSidebandDevice::GetNodeOfType(this, v11, a2, v6, &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1, &v34);
  if ( v15 < 0 )
  {
    if ( v15 == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v17 = 0;
      }
      if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v30,
          v33,
          0x3Fu,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
  else
  {
    a3->Mute = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v16 = 0;
    }
    if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v30,
        9u,
        0x3Eu,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  SidetoneNodes = CSidebandDevice::GetSidetoneNodes(this, v11, v6, &v36, &v35);
  if ( SidetoneNodes < 0 )
  {
    if ( SidetoneNodes == -1073741275 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v20 = 0;
      }
      if ( v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v20,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v31,
          9u,
          0x41u,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
  else
  {
    a3->Sidetone = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v19 = 0;
    }
    if ( v19 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v31,
        v33,
        0x40u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  BridgePinForDataPin = CSidebandDevice::IsFeedbackSupported(this, *((struct _KSDEVICE **)this + 5), a2, &v37);
  if ( BridgePinForDataPin >= 0 )
  {
    v21 = v37;
    a3->Feedback = v37;
    if ( v21 )
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v23 = 0;
      }
      v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_84;
      v25 = 66;
    }
    else
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v23 = 0;
      }
      v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_84;
      v25 = 67;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)v22->AttachedDevice,
      v23,
      v24,
      (__int64)v22->DeviceExtension,
      v31,
      9u,
      v25,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
LABEL_84:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v26 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( v26 || v7 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v31,
      9u,
      0x44u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)BridgePinForDataPin;
}

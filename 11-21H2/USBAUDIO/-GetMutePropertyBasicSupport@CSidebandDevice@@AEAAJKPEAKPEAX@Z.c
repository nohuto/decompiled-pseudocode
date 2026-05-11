/*
 * XREFs of ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B260
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00124A0 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     PropertyGetBooleanBasicSupportSideband @ 0x1C002E984 (PropertyGetBooleanBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMutePropertyBasicSupport(
        CSidebandDevice *this,
        unsigned int a2,
        unsigned int *a3,
        void *a4)
{
  struct _KSFILTER_DESCRIPTOR *v8; // rsi
  char v9; // bl
  char v10; // dl
  char v11; // r8
  int PinFromEpIndex; // edi
  char v13; // dl
  PDEVICE_OBJECT v14; // rcx
  char v15; // dl
  char v16; // r8
  unsigned __int16 v17; // ax
  char v18; // dl
  int v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-34h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF

  v24 = -1;
  v21 = -1;
  v22 = -1;
  v8 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 128LL);
  v23 = 0LL;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
      v20,
      9u,
      0x80u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, a2, &v24, &v23);
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        9u,
        0x81u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_44;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, v8, v24, &v21);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                       this,
                       v21,
                       v24,
                       v8,
                       &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                       &v22);
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = PropertyGetBooleanBasicSupportSideband(
                         (char *)v8->NodeDescriptors + v22 * v8->NodeDescriptorSize,
                         a3,
                         a4);
      if ( PinFromEpIndex < 0 )
      {
        v14 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v15 = 0;
        }
        v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v17 = 132;
          goto LABEL_27;
        }
      }
    }
    else
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = 131;
        goto LABEL_27;
      }
    }
  }
  else
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = 130;
LABEL_27:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v14->AttachedDevice,
        v15,
        v16,
        (__int64)v14->DeviceExtension,
        v20,
        9u,
        v17,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
LABEL_44:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
      v20,
      9u,
      0x85u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

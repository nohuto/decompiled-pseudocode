/*
 * XREFs of ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C7A8
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012980 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     PropertyGetDbBasicSupportSideband @ 0x1C002EC1C (PropertyGetDbBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
        CSidebandDevice *this,
        int a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // di
  char v11; // dl
  char v12; // r8
  int PinFromEpIndex; // ebx
  char v14; // dl
  PDEVICE_OBJECT v15; // rcx
  char v16; // dl
  char v17; // r8
  unsigned __int16 v18; // ax
  char v19; // dl
  int v21; // [rsp+20h] [rbp-50h]
  unsigned int v22; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v24; // [rsp+58h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+30h] BYREF

  v22 = -1;
  v23 = -1;
  v26 = -1;
  v24 = -1;
  v8 = *((_QWORD *)this + 5);
  v25 = 0LL;
  v9 = *(_QWORD *)(v8 + 16);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x8Du,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, a2, &v22, &v25);
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v14 = 0;
    }
    if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        9u,
        0x8Eu,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_52;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v22, &v23);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v23, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), &v26, &v24);
    if ( PinFromEpIndex >= 0 )
    {
      if ( v26 == -1 )
      {
        PinFromEpIndex = -1073741275;
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v16 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = 145;
          goto LABEL_27;
        }
      }
      else
      {
        PinFromEpIndex = PropertyGetDbBasicSupportSideband(*(_QWORD *)(v9 + 200) + v26 * *(_DWORD *)(v9 + 196), a3, a4);
        if ( PinFromEpIndex < 0 )
        {
          v15 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v16 = 0;
          }
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = 146;
            goto LABEL_27;
          }
        }
      }
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v16 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 144;
        goto LABEL_27;
      }
    }
  }
  else
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v16 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = 143;
LABEL_27:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v15->AttachedDevice,
        v16,
        v17,
        (__int64)v15->DeviceExtension,
        v21,
        9u,
        v18,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    }
  }
LABEL_52:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v19 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( v19 || v10 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v10,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      9u,
      0x93u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

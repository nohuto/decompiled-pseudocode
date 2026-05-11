/*
 * XREFs of ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C0030604 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1C0030B3C (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetSidetone(CSidebandDevice *this, PIRP Irp)
{
  __int64 v4; // rsi
  char v5; // di
  char v6; // dl
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS PinFromEpIndex; // ebx
  char v10; // dl
  unsigned int *p_NamedPipeType; // r15
  char v12; // dl
  char v13; // dl
  __int64 v14; // r12
  char v15; // dl
  PDEVICE_OBJECT v16; // rcx
  char v17; // dl
  char v18; // r8
  unsigned __int16 v19; // ax
  char v20; // dl
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+50h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+60h] BYREF

  v29 = -1;
  v24 = -1;
  v26 = -1;
  v27 = -1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 128LL;
  v25 = 0LL;
  v28 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      9u,
      0x3Eu,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    PinFromEpIndex = -1073741306;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        v23,
        0x3Fu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_82;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v12 = 0;
    }
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        v23,
        0x40u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_82;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)(p_NamedPipeType + 3);
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      v23,
      0x41u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  }
  else
  {
    v14 = (__int64)(p_NamedPipeType + 3);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v29, &v25);
  if ( PinFromEpIndex < 0 )
  {
    v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        9u,
        0x42u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_82;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v4, v29, &v24);
  if ( PinFromEpIndex < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v19 = 67;
    goto LABEL_53;
  }
  PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v24, (struct _KSFILTER_DESCRIPTOR *)v4, &v26, &v27);
  if ( PinFromEpIndex < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v19 = 68;
LABEL_53:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v16->AttachedDevice,
      v17,
      v18,
      (__int64)v16->DeviceExtension,
      v22,
      9u,
      v19,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_82;
  }
  if ( v26 == -1
    || (PinFromEpIndex = PropertySetDbLevelSideband(
                           *((_QWORD *)this + 5),
                           *(_DWORD *)(v4 + 72) + v26 * *(_DWORD *)(v4 + 68),
                           (unsigned int)&v28,
                           0,
                           v22,
                           v14),
        PinFromEpIndex >= 0) )
  {
    if ( v27 == -1
      || (PinFromEpIndex = PropertySetBooleanSideband(
                             *((_QWORD *)this + 5),
                             *(_DWORD *)(v4 + 72) + v27 * *(_DWORD *)(v4 + 68),
                             (unsigned int)&v28,
                             0,
                             v22,
                             (__int64)(p_NamedPipeType + 4)),
          PinFromEpIndex >= 0) )
    {
      Irp->IoStatus.Information = v28;
      goto LABEL_82;
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v17 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = 70;
      goto LABEL_53;
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v17 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = 69;
      goto LABEL_53;
    }
  }
LABEL_82:
  Irp->IoStatus.Status = PinFromEpIndex;
  IofCompleteRequest(Irp, 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v20 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( v20 || v5 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      9u,
      0x47u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

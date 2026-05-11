/*
 * XREFs of ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FAC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C0030604 (PropertySetBooleanSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetMute(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  char v6; // di
  char v7; // dl
  char v8; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int PinFromEpIndex; // ebx
  char v11; // dl
  unsigned int *p_NamedPipeType; // r15
  char v13; // dl
  char v14; // dl
  char v15; // dl
  unsigned int v16; // esi
  PDEVICE_OBJECT v17; // rcx
  char v18; // dl
  char v19; // r8
  unsigned __int16 v20; // ax
  char v21; // dl
  unsigned int v22; // ebx
  PIRP v23; // rcx
  char v24; // dl
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+28h] [rbp-50h]
  unsigned int v28; // [rsp+60h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v29; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+C8h] [rbp+50h]
  unsigned int v32; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+60h] BYREF

  Irp = a2;
  v30 = -1;
  v32 = -1;
  v33 = -1;
  v4 = *((_QWORD *)this + 5);
  v29 = 0LL;
  v28 = 0;
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
      v26,
      9u,
      0x2Du,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    PinFromEpIndex = -1073741306;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v11 = 0;
    }
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v26,
        v27,
        0x2Eu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_77;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v26,
        v27,
        0x2Fu,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_77;
  }
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
      v26,
      v27,
      0x30u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v30, &v29);
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
        v26,
        9u,
        0x31u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_77;
  }
  v16 = v30;
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v5 + 128), v30, &v32);
  if ( PinFromEpIndex < 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v18 = 0;
    }
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v18 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_77;
    v20 = 50;
    goto LABEL_50;
  }
  PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                     this,
                     v32,
                     v16,
                     (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                     &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                     &v33);
  if ( PinFromEpIndex < 0 )
  {
    v17 = WPP_GLOBAL_Control;
    v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v18 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_77;
    v20 = 51;
LABEL_50:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v17->AttachedDevice,
      v18,
      v19,
      (__int64)v17->DeviceExtension,
      v26,
      9u,
      v20,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_77:
    v23 = Irp;
    goto LABEL_78;
  }
  v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v22 = v33;
  if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v26,
      9u,
      0x34u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  PinFromEpIndex = PropertySetBooleanSideband(
                     *((_QWORD *)this + 5),
                     *(_DWORD *)(v5 + 200) + v22 * *(_DWORD *)(v5 + 196),
                     (unsigned int)&v28,
                     p_NamedPipeType[2],
                     v26,
                     (__int64)(p_NamedPipeType + 3));
  if ( PinFromEpIndex < 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v18 = 0;
    }
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v18 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_77;
    v20 = 53;
    goto LABEL_50;
  }
  v23 = Irp;
  Irp->IoStatus.Information = v28;
LABEL_78:
  v23->IoStatus.Status = PinFromEpIndex;
  IofCompleteRequest(v23, 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v24 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( v24 || v6 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v26,
      9u,
      0x36u,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

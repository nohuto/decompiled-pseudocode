/*
 * XREFs of ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BF5C
 * Callers:
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012800 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     PropertyGetBooleanSideband @ 0x1C002EA24 (PropertyGetBooleanSideband.c)
 *     PropertyGetDbLevelSideband @ 0x1C002EF28 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v4; // rsi
  char v5; // di
  char v6; // dl
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int PinFromEpIndex; // ebx
  unsigned int *p_NamedPipeType; // r15
  char v11; // dl
  PDEVICE_OBJECT v12; // rcx
  char v13; // dl
  char v14; // r8
  unsigned __int16 v15; // ax
  unsigned int v16; // r14d
  _DWORD *UserBuffer; // r12
  int v18; // ecx
  int v19; // r10d
  char v20; // dl
  int v22; // [rsp+20h] [rbp-48h]
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v27; // [rsp+C8h] [rbp+60h] BYREF

  v26 = -1;
  v27 = -1;
  v24 = -1;
  v25 = -1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 128LL;
  v23 = 0LL;
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
      0x86u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    PinFromEpIndex = -1073741306;
    goto LABEL_62;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_62;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v26, &v23);
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v11 = 0;
    }
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v22,
        9u,
        0x87u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    goto LABEL_62;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v4, v26, &v27);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v27, (struct _KSFILTER_DESCRIPTOR *)v4, &v24, &v25);
    if ( PinFromEpIndex >= 0 )
    {
      v16 = 0;
      UserBuffer = a2->UserBuffer;
      if ( p_NamedPipeType[2] != -1 )
        v16 = p_NamedPipeType[2];
      memmove(a2->UserBuffer, p_NamedPipeType, 0x14uLL);
      v19 = -1;
      UserBuffer[2] = v16;
      if ( v24 != -1 )
      {
        PinFromEpIndex = PropertyGetDbLevelSideband(
                           v18,
                           *(_DWORD *)(v4 + 72) + v24 * *(_DWORD *)(v4 + 68),
                           (unsigned int)&v24,
                           v16,
                           (__int64)(UserBuffer + 3));
        if ( PinFromEpIndex < 0 )
        {
          v12 = WPP_GLOBAL_Control;
          v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v13 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
          v15 = 138;
LABEL_31:
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)v12->AttachedDevice,
            v13,
            v14,
            (__int64)v12->DeviceExtension,
            v22,
            9u,
            v15,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
          goto LABEL_62;
        }
      }
      if ( v25 == v19
        || (PinFromEpIndex = PropertyGetBooleanSideband(
                               v18,
                               *(_DWORD *)(v4 + 72) + v25 * *(_DWORD *)(v4 + 68),
                               (unsigned int)&v24,
                               v16,
                               (__int64)(UserBuffer + 4)),
            PinFromEpIndex >= 0) )
      {
        a2->IoStatus.Information = 20LL;
        goto LABEL_62;
      }
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = 139;
        goto LABEL_31;
      }
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = 137;
        goto LABEL_31;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 136;
      goto LABEL_31;
    }
  }
LABEL_62:
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
      0x8Cu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)PinFromEpIndex;
}

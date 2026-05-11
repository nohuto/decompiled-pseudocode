/*
 * XREFs of ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0007734
 * Callers:
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00075A4 (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000E838 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     PropertyGetDbLevelSideband @ 0x1C002E8AC (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // rsi
  struct _KSFILTER_DESCRIPTOR *v4; // r14
  CSidebandDevice *v5; // rcx
  char v6; // di
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int PinFromEpIndex; // ebx
  unsigned int *p_NamedPipeType; // r12
  bool v11; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int v14; // esi
  PDEVICE_OBJECT v15; // rcx
  char v16; // r13
  int v17; // r8d
  unsigned int v18; // ebx
  char *v19; // rsi
  struct _IRP *v20; // r14
  PVOID UserBuffer; // rbx
  int v22; // ecx
  int v24; // [rsp+20h] [rbp-58h]
  unsigned int v25; // [rsp+60h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v26; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+48h] BYREF
  struct _IRP *v28; // [rsp+C8h] [rbp+50h]
  unsigned int v29; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+60h] BYREF

  v28 = a2;
  v2 = a2;
  v27 = -1;
  v29 = -1;
  v30 = -1;
  v4 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  v26 = 0LL;
  v25 = 0;
  v5 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v7, WPP_GLOBAL_Control->DeviceExtension);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    PinFromEpIndex = -1073741306;
    goto LABEL_72;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(v5, v4, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_72;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v27, &v26);
  if ( PinFromEpIndex >= 0 )
  {
    v14 = v27;
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(v4, v27, &v29);
    if ( PinFromEpIndex >= 0 )
    {
      v16 = v29;
      PinFromEpIndex = CSidebandDevice::GetNodeOfType(v29, v14, v4, &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1, &v30);
      if ( PinFromEpIndex >= 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(a2) = 0;
        }
        v18 = v30;
        if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_ddd(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)a2,
            v17,
            WPP_GLOBAL_Control->DeviceExtension,
            v24,
            9,
            116,
            (__int64)&WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids,
            v16,
            v14,
            v30);
        }
        v19 = (char *)v4->NodeDescriptors + v4->NodeDescriptorSize * v18;
        if ( CurrentStackLocation->Parameters.Read.Length != 16 )
        {
          PinFromEpIndex = -1073741306;
          goto LABEL_72;
        }
        v20 = v28;
        UserBuffer = v28->UserBuffer;
        memmove(UserBuffer, p_NamedPipeType, 0x10uLL);
        PinFromEpIndex = PropertyGetDbLevelSideband(
                           v22,
                           (_DWORD)v19,
                           (unsigned int)&v25,
                           p_NamedPipeType[2],
                           (__int64)UserBuffer + 12);
        if ( PinFromEpIndex >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)a2,
              *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
              WPP_GLOBAL_Control->DeviceExtension);
          v20->IoStatus.Information = v25;
          goto LABEL_72;
        }
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
      }
      else
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
      }
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_72;
    }
    DeviceExtension = v15->DeviceExtension;
    AttachedDevice = v15->AttachedDevice;
    goto LABEL_30;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_30:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)a2, v11, (_DWORD)DeviceExtension);
  }
LABEL_72:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v6, WPP_GLOBAL_Control->DeviceExtension);
  return (unsigned int)PinFromEpIndex;
}

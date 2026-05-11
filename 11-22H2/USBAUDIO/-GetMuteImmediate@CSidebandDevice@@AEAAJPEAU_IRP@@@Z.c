/*
 * XREFs of ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DF84
 * Callers:
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00141B4 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000E838 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     PropertyGetBooleanSideband @ 0x1C002E5D4 (PropertyGetBooleanSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMuteImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // rsi
  struct _KSFILTER_DESCRIPTOR *v4; // r14
  CSidebandDevice *v5; // rcx
  char v6; // di
  char v7; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int PinFromEpIndex; // ebx
  unsigned int *p_NamedPipeType; // r13
  bool v12; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int v15; // esi
  PDEVICE_OBJECT v16; // rcx
  char v17; // dl
  unsigned int v18; // ebx
  char *v19; // rsi
  struct _IRP *v20; // r14
  PVOID UserBuffer; // rbx
  int v22; // ecx
  int v23; // [rsp+20h] [rbp-58h]
  unsigned int v24; // [rsp+60h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+48h] BYREF
  struct _IRP *v27; // [rsp+C8h] [rbp+50h]
  unsigned int v28; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v29; // [rsp+D8h] [rbp+60h] BYREF

  v27 = a2;
  v2 = a2;
  v26 = -1;
  v28 = -1;
  v29 = -1;
  v4 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  v25 = 0LL;
  v24 = 0;
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
    goto LABEL_15;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(v5, v4, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_15;
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
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v26, &v25);
  if ( PinFromEpIndex >= 0 )
  {
    v15 = v26;
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(v4, (const KSTOPOLOGY_CONNECTION *)v26, &v28);
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetNodeOfType(v28, v15, v4, &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1, &v29);
      if ( PinFromEpIndex >= 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v17 = 0;
        }
        v18 = v29;
        if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v17,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v23,
            9u,
            0x83u,
            (__int64)&WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids);
        v19 = (char *)v4->NodeDescriptors + v4->NodeDescriptorSize * v18;
        if ( CurrentStackLocation->Parameters.Read.Length != 16 )
        {
          PinFromEpIndex = -1073741306;
          goto LABEL_15;
        }
        v20 = v27;
        UserBuffer = v27->UserBuffer;
        memmove(UserBuffer, p_NamedPipeType, 0x10uLL);
        PinFromEpIndex = PropertyGetBooleanSideband(
                           v22,
                           (_DWORD)v19,
                           (unsigned int)&v24,
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
          v20->IoStatus.Information = v24;
          goto LABEL_15;
        }
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
    }
    DeviceExtension = v16->DeviceExtension;
    AttachedDevice = v16->AttachedDevice;
    goto LABEL_41;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_41:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)a2, v12, (_DWORD)DeviceExtension);
  }
LABEL_15:
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

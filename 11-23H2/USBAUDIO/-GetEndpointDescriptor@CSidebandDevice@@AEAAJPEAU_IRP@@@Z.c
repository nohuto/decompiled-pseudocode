/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00136C0
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000D220 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000D5AC (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000E4D4 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000F59C (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000F95C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___ @ 0x1C0012CB4 (scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440___.c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_ @ 0x1C0012CCC (_lambda_fc1b195165d1d50f985f4c2976c13440_--_lambda_fc1b195165d1d50f985f4c2976c13440_.c)
 *     _scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____::_2_::scope_exit::_scope_exit @ 0x1C0012D5C (_scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____--_2_--scope_exit--_scope_exit.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KSFILTER_DESCRIPTOR *v6; // rdi
  int v7; // edx
  CSidebandDevice *v8; // rcx
  int v9; // r8d
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  unsigned int NamedPipeType; // r15d
  PDEVICE_OBJECT v13; // r10
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  char *v16; // r14
  int v17; // edi
  unsigned int v18; // edi
  ULONG Length; // eax
  char *UserBuffer; // rsi
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v21; // xmm0
  unsigned int VolumePropertyBasicSupport; // eax
  PDEVICE_OBJECT v23; // rcx
  unsigned int MutePropertyBasicSupport; // eax
  unsigned int SidetoneVolumePropertyBasicSupport; // eax
  int PinFromEpIndex; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-51h] BYREF
  struct _IRP *v30; // [rsp+60h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v32; // [rsp+78h] [rbp-31h] BYREF
  __int128 v33; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v34[24]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-1h] BYREF
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v36; // [rsp+B8h] [rbp+Fh] BYREF

  v30 = a2;
  PinFromEpIndex = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v4 = *((_QWORD *)this + 4);
  v32 = 0LL;
  v5 = *(_QWORD *)(v4 + 16);
  DestinationString = 0LL;
  v28 = -1;
  v29 = -1;
  v6 = (struct _KSFILTER_DESCRIPTOR *)(v5 + 128);
  v36 = 0LL;
  v33 = *(_OWORD *)lambda_fc1b195165d1d50f985f4c2976c13440_::_lambda_fc1b195165d1d50f985f4c2976c13440_(
                     &v35,
                     (__int64)&v30,
                     (__int64)&PinFromEpIndex);
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440_((__int64)v34, &v33);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          v8,
                          (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                          NamedPipeType) )
    {
      v10 = -1073741811;
      PinFromEpIndex = -1073741811;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      goto LABEL_91;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v5 + 24));
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v28, &v32);
    v10 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(v6, (const KSTOPOLOGY_CONNECTION *)v28, &v29);
      v10 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v16 = (char *)v6->PinDescriptors + v6->PinDescriptorSize * v29;
        PinFromEpIndex = CSidebandDevice::GetEndpointCapabilities(this, v28, &v36);
        v10 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v17 = 96;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2228327 )
            v17 = 88;
          v18 = DestinationString.MaximumLength + v17;
          Length = CurrentStackLocation->Parameters.Read.Length;
          if ( !Length )
          {
            v10 = -1073741789;
            v30->IoStatus.Information = v18;
            PinFromEpIndex = -1073741789;
            goto LABEL_91;
          }
          if ( Length != v18 )
          {
            v10 = -1073741811;
            PinFromEpIndex = -1073741811;
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v7) = 0;
            }
            LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              goto LABEL_8;
            goto LABEL_91;
          }
          UserBuffer = (char *)v30->UserBuffer;
          memset(UserBuffer + 4, 0, 0x54uLL);
          *(_DWORD *)UserBuffer = v18;
          PinFromEpIndex = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 4));
          v10 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            *(_OWORD *)(UserBuffer + 20) = *(_OWORD *)*((_QWORD *)v16 + 9);
            *((_DWORD *)UserBuffer + 9) = *((_DWORD *)v16 + 16);
            v21 = v36;
            *((_QWORD *)UserBuffer + 8) = UserBuffer + 88;
            *((_WORD *)UserBuffer + 28) = 0;
            *(_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *)(UserBuffer + 40) = v21;
            *((_WORD *)UserBuffer + 29) = DestinationString.MaximumLength;
            RtlCopyUnicodeString((PUNICODE_STRING)(UserBuffer + 56), &DestinationString);
            VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           (unsigned int *)UserBuffer + 18,
                                           0LL);
            PinFromEpIndex = VolumePropertyBasicSupport;
            v10 = VolumePropertyBasicSupport;
            if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
            {
              PinFromEpIndex = 0;
              MutePropertyBasicSupport = CSidebandDevice::GetMutePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           (unsigned int *)UserBuffer + 20,
                                           0LL);
              PinFromEpIndex = MutePropertyBasicSupport;
              v10 = MutePropertyBasicSupport;
              if ( MutePropertyBasicSupport == -1073741789 || MutePropertyBasicSupport == -1073741275 )
              {
                PinFromEpIndex = 0;
                SidetoneVolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                                       this,
                                                       NamedPipeType,
                                                       (unsigned int *)UserBuffer + 19,
                                                       0LL);
                PinFromEpIndex = SidetoneVolumePropertyBasicSupport;
                v10 = SidetoneVolumePropertyBasicSupport;
                if ( SidetoneVolumePropertyBasicSupport == -1073741789
                  || SidetoneVolumePropertyBasicSupport == -1073741275 )
                {
                  PinFromEpIndex = 0;
                  v30->IoStatus.Information = v18;
                  goto LABEL_90;
                }
                v23 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
                {
                  LOBYTE(v7) = 0;
                }
                LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_91;
              }
              else
              {
                v23 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
                {
                  LOBYTE(v7) = 0;
                }
                LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_91;
              }
            }
            else
            {
              v23 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v7) = 0;
              }
              LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_91;
            }
            DeviceExtension = v23->DeviceExtension;
            AttachedDevice = v23->AttachedDevice;
LABEL_25:
            WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v7, v9, (_DWORD)DeviceExtension);
            goto LABEL_90;
          }
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v7) = 0;
          }
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_91;
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v7) = 0;
          }
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_91;
        }
      }
      else
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v7) = 0;
        }
        LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
    }
    DeviceExtension = v13->DeviceExtension;
    AttachedDevice = v13->AttachedDevice;
    goto LABEL_25;
  }
  v10 = -1073741306;
  PinFromEpIndex = -1073741306;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v7) = 0;
  }
  LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_8:
    WPP_RECORDER_AND_TRACE_SF_dd(v11->AttachedDevice, v7, v9, v11->DeviceExtension);
LABEL_90:
    v10 = PinFromEpIndex;
  }
LABEL_91:
  scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____::_2_::scope_exit::_scope_exit((__int64)v34);
  return v10;
}

/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009DC0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009F68 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A2F4 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B260 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000BB70 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C7A8 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000D0E4 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     _scope_exit__lambda_d367a348401780af63acf916821343f4____::_2_::scope_exit::_scope_exit @ 0x1C0011594 (_scope_exit__lambda_d367a348401780af63acf916821343f4____--_2_--scope_exit--_scope_exit.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v3; // bl
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // edi
  PDEVICE_OBJECT v8; // rcx
  char v9; // r8
  unsigned __int16 v10; // dx
  unsigned int NamedPipeType; // r12d
  unsigned int v12; // edx
  PDEVICE_OBJECT v13; // r10
  char v14; // r8
  unsigned __int16 v15; // cx
  __int64 v16; // r15
  int v17; // esi
  unsigned int v18; // esi
  ULONG Length; // eax
  char *UserBuffer; // r14
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v21; // xmm0
  int VolumePropertyBasicSupport; // eax
  PDEVICE_OBJECT v23; // rcx
  char v24; // r8
  unsigned __int16 v25; // r9
  int MutePropertyBasicSupport; // eax
  unsigned int SidetoneVolumePropertyBasicSupport; // eax
  int v29; // [rsp+20h] [rbp-69h]
  int v30; // [rsp+28h] [rbp-61h]
  int PinFromEpIndex; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-35h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-31h] BYREF
  struct _IRP *v34; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v36; // [rsp+78h] [rbp-11h] BYREF
  PIRP *v37[2]; // [rsp+80h] [rbp-9h] BYREF
  char v38; // [rsp+90h] [rbp+7h]
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v39; // [rsp+98h] [rbp+Fh] BYREF

  v34 = a2;
  PinFromEpIndex = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 1;
  a2->IoStatus.Information = 0LL;
  v5 = *((_QWORD *)this + 5);
  v36 = 0LL;
  v38 = 1;
  v6 = *(_QWORD *)(v5 + 16);
  v32 = -1;
  v33 = -1;
  v37[0] = &v34;
  DestinationString = 0LL;
  v37[1] = (PIRP *)&PinFromEpIndex;
  v39 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    v7 = -1073741306;
    PinFromEpIndex = -1073741306;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = 17;
LABEL_9:
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)v8->AttachedDevice,
        v3,
        v9,
        (__int64)v8->DeviceExtension,
        v29,
        v30,
        v10,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_94:
      v7 = PinFromEpIndex;
      goto LABEL_95;
    }
    goto LABEL_95;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 + 24));
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v32, &v36);
    v12 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                         this,
                         (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                         v32,
                         &v33);
      v12 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v16 = *(_QWORD *)(v6 + 168) + v33 * *(_DWORD *)(v6 + 164);
        PinFromEpIndex = CSidebandDevice::GetEndpointCapabilities(this, v32, &v39);
        v12 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v17 = 96;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2228327 )
            v17 = 88;
          v18 = DestinationString.MaximumLength + v17;
          Length = CurrentStackLocation->Parameters.Read.Length;
          if ( !Length )
          {
            v7 = -1073741789;
            v34->IoStatus.Information = v18;
            PinFromEpIndex = -1073741789;
            goto LABEL_95;
          }
          if ( Length != v18 )
          {
            v7 = -1073741811;
            PinFromEpIndex = -1073741811;
            v8 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v3 = 0;
            }
            v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v10 = 22;
              goto LABEL_9;
            }
            goto LABEL_95;
          }
          UserBuffer = (char *)v34->UserBuffer;
          memset(UserBuffer + 4, 0, 0x54uLL);
          *(_DWORD *)UserBuffer = v18;
          PinFromEpIndex = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 4));
          v12 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            *(_OWORD *)(UserBuffer + 20) = *(_OWORD *)*(_QWORD *)(v16 + 72);
            *((_DWORD *)UserBuffer + 9) = *(_DWORD *)(v16 + 64);
            v21 = v39;
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
            v12 = VolumePropertyBasicSupport;
            if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
            {
              PinFromEpIndex = 0;
              MutePropertyBasicSupport = CSidebandDevice::GetMutePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           (unsigned int *)UserBuffer + 20,
                                           0LL);
              PinFromEpIndex = MutePropertyBasicSupport;
              v12 = MutePropertyBasicSupport;
              if ( MutePropertyBasicSupport == -1073741789 || MutePropertyBasicSupport == -1073741275 )
              {
                PinFromEpIndex = 0;
                SidetoneVolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                                       this,
                                                       NamedPipeType,
                                                       (unsigned int *)UserBuffer + 19,
                                                       0LL);
                PinFromEpIndex = SidetoneVolumePropertyBasicSupport;
                v7 = SidetoneVolumePropertyBasicSupport;
                if ( SidetoneVolumePropertyBasicSupport == -1073741789
                  || SidetoneVolumePropertyBasicSupport == -1073741275 )
                {
                  PinFromEpIndex = 0;
                  v34->IoStatus.Information = v18;
                  goto LABEL_94;
                }
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                {
                  v3 = 0;
                }
                if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_AND_TRACE_SF_d(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v3,
                    *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v29,
                    9u,
                    0x1Au,
                    (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
                  goto LABEL_94;
                }
                goto LABEL_95;
              }
              v23 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v3 = 0;
              }
              v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              {
LABEL_28:
                v7 = v12;
                goto LABEL_95;
              }
              v25 = 25;
            }
            else
            {
              v23 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v3 = 0;
              }
              v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_28;
              v25 = 24;
            }
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)v23->AttachedDevice,
              v3,
              v24,
              (__int64)v23->DeviceExtension,
              v29,
              9u,
              v25,
              (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_27:
            v12 = PinFromEpIndex;
            goto LABEL_28;
          }
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v3 = 0;
          }
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_28;
          v15 = 23;
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v3 = 0;
          }
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_28;
          v15 = 21;
        }
      }
      else
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v3 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v15 = 20;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v15 = 19;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v13->AttachedDevice,
      v3,
      v14,
      (__int64)v13->DeviceExtension,
      v29,
      9u,
      v15,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    goto LABEL_27;
  }
  v7 = -1073741811;
  PinFromEpIndex = -1073741811;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v3 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = 18;
    goto LABEL_9;
  }
LABEL_95:
  scope_exit__lambda_d367a348401780af63acf916821343f4____::_2_::scope_exit::_scope_exit(v37);
  return v7;
}

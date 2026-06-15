/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18000DE94 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC70 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F801C (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F86F8 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?TryGetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DA2C (-TryGetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005690C (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0B4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18005E438 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     CreateAudioMediaType @ 0x180069874 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x180115360 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18011D278 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18011E698 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014E44C (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        CEndpointCharacteristics **a1,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        IAudioMediaType *a6,
        struct _GUID *a7,
        struct _GUID *a8,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12,
        struct tWAVEFORMATEX **a13)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r15d
  struct tWAVEFORMATEX *v15; // rbx
  HRESULT DeviceDefaults; // edi
  IAudioMediaType *v17; // r14
  __int64 v18; // rax
  int StreamGroupFormat; // eax
  unsigned int v20; // esi
  struct tWAVEFORMATEX **p_pv; // rdx
  const struct tWAVEFORMATEX *v22; // rcx
  WAVEFORMATEX *v23; // rax
  struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // rax
  struct tWAVEFORMATEX *v26; // rax
  bool v28; // sf
  const struct tWAVEFORMATEX *v29; // rax
  const struct tWAVEFORMATEX *v30; // rax
  const struct tWAVEFORMATEX *v31; // rax
  struct IAudioMediaType **v32; // [rsp+20h] [rbp-A9h]
  int v33; // [rsp+20h] [rbp-A9h]
  struct tWAVEFORMATEX *v34; // [rsp+40h] [rbp-89h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+48h] [rbp-81h] BYREF
  struct IMMDevice *v36; // [rsp+50h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-71h] BYREF
  struct tWAVEFORMATEX *v38[2]; // [rsp+60h] [rbp-69h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+70h] [rbp-59h] BYREF
  struct _GUID v40; // [rsp+80h] [rbp-49h] BYREF
  struct _GUID v41; // [rsp+90h] [rbp-39h] BYREF
  struct tWAVEFORMATEX **v42; // [rsp+A0h] [rbp-29h]
  struct tWAVEFORMATEX **v43; // [rsp+A8h] [rbp-21h]
  struct tWAVEFORMATEX **v44; // [rsp+B0h] [rbp-19h]
  struct tWAVEFORMATEX **v45; // [rsp+B8h] [rbp-11h]
  struct _GUID v46; // [rsp+C0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+3Fh]

  v13 = (int)a3;
  ppIAudioMediaType[0] = a6;
  v44 = a10;
  v43 = a11;
  v45 = a12;
  v42 = a13;
  pAudioFormat = 0LL;
  v34 = 0LL;
  v15 = 0LL;
  v38[0] = 0LL;
  pv = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(Src, &v34);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    v36 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((char *)*a1 + 40, &v36);
    if ( (unsigned int)IsSPDIFFormat(Src) && CEndpointCharacteristics::IsSPDIFEndpoint(*a1) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v36, Src, &pAudioFormat, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(Src, &pAudioFormat);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
    v28 = DeviceDefaults < 0;
  }
  else
  {
    if ( (_DWORD)a3 != 1 )
    {
      if ( !a2 )
      {
        v40 = *a8;
        DeviceDefaults = GetDeviceDefaults(
                           (struct EndpointCharacteristicsDescriptor *)a1,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                           &v40,
                           &pAudioFormat,
                           (struct tWAVEFORMATEX **)&pv,
                           0LL,
                           0LL);
        if ( DeviceDefaults < 0 )
          goto LABEL_16;
        v17 = ppIAudioMediaType[0];
        *(_OWORD *)ppIAudioMediaType = *(_OWORD *)ppIAudioMediaType[0];
        if ( EffectPack::CanProcessingModeBeParameterized(a1[1], (struct _GUID *)ppIAudioMediaType, v13) )
          goto LABEL_44;
        v18 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v18 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v18 )
        {
LABEL_44:
          *(_OWORD *)ppIAudioMediaType = *(_OWORD *)&v17->lpVtbl;
          DeviceDefaults = EffectPack::GetMixFormat(a1[1], v13, (struct _GUID *)ppIAudioMediaType, v38);
          v15 = v38[0];
          if ( DeviceDefaults < 0 )
            goto LABEL_16;
        }
        *(_OWORD *)ppIAudioMediaType = *(_OWORD *)&v17->lpVtbl;
        StreamGroupFormat = CEndpointCharacteristics::TryGetStreamGroupFormat(
                              *a1,
                              v13,
                              (struct _GUID *)ppIAudioMediaType,
                              &v34);
        v20 = StreamGroupFormat;
        if ( StreamGroupFormat < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2EC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)StreamGroupFormat,
            v33);
          goto LABEL_17;
        }
        if ( v34 )
          goto LABEL_14;
        p_pv = &v34;
        v22 = (const struct tWAVEFORMATEX *)pv;
        goto LABEL_13;
      }
      *(struct _GUID *)ppIAudioMediaType = *a8;
      v40 = *a7;
      v41 = *(struct _GUID *)&a6->lpVtbl;
      DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                         (struct EndpointCharacteristicsDescriptor *)a1,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                         Src,
                         &v41,
                         &v40,
                         (struct _GUID *)ppIAudioMediaType,
                         1,
                         &pAudioFormat);
      if ( DeviceDefaults >= 0 )
      {
        ppIAudioMediaType[0] = 0LL;
        v36 = 0LL;
        *(_QWORD *)&v40.Data1 = 0LL;
        *(_QWORD *)&v41.Data1 = 0LL;
        DeviceDefaults = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, ppIAudioMediaType);
        if ( DeviceDefaults >= 0 )
        {
          v46 = *a7;
          DeviceDefaults = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                             a1[1],
                             &v46,
                             v13,
                             ppIAudioMediaType[0],
                             (struct IAudioMediaType **)&v36);
          if ( DeviceDefaults >= 0 )
          {
            v46 = *a7;
            DeviceDefaults = EffectPack::DeriveMixFormatFromDevicePipeFormat(
                               a1[1],
                               &v46,
                               v13,
                               (struct IAudioMediaType *)v36,
                               (struct IAudioMediaType **)&v41,
                               (struct IAudioMediaType **)&v40);
            if ( DeviceDefaults >= 0 )
            {
              v29 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IMMDevice *))v36->lpVtbl->GetId)(v36);
              DeviceDefaults = CloneWaveFormat(v29, (struct tWAVEFORMATEX **)&pv);
              if ( DeviceDefaults >= 0 )
              {
                v30 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v41.Data1 + 40LL))(*(_QWORD *)&v41.Data1);
                DeviceDefaults = CloneWaveFormat(v30, v38);
                if ( DeviceDefaults >= 0 )
                {
                  if ( *(_QWORD *)&v40.Data1 )
                    v31 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v40.Data1
                                                                                          + 40LL))(*(_QWORD *)&v40.Data1);
                  else
                    v31 = (const struct tWAVEFORMATEX *)pv;
                  DeviceDefaults = CloneWaveFormat(v31, &v34);
                }
                v15 = v38[0];
              }
            }
          }
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(ppIAudioMediaType);
        goto LABEL_14;
      }
      goto LABEL_16;
    }
    *(struct _GUID *)ppIAudioMediaType = *a7;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(
                       (struct EndpointCharacteristicsDescriptor *)a1,
                       Src,
                       a3,
                       (struct _GUID *)ppIAudioMediaType,
                       (struct _GUID *)v32,
                       a5,
                       &pAudioFormat);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    DeviceDefaults = CloneWaveFormat(pAudioFormat, v38);
    v15 = v38[0];
    ConvertPCMWfxToIEEEFloat(v38[0]);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    DeviceDefaults = CloneWaveFormat(v15, &v34);
    v28 = DeviceDefaults < 0;
  }
  if ( !v28 )
  {
    p_pv = (struct tWAVEFORMATEX **)&pv;
    v22 = v34;
LABEL_13:
    DeviceDefaults = CloneWaveFormat(v22, p_pv);
LABEL_14:
    if ( DeviceDefaults >= 0 )
    {
      v23 = pAudioFormat;
      pAudioFormat = 0LL;
      *v42 = v23;
      v24 = v34;
      v34 = 0LL;
      *v43 = v24;
      v25 = v15;
      v15 = 0LL;
      *v44 = v25;
      v26 = (struct tWAVEFORMATEX *)pv;
      pv = 0LL;
      *v45 = v26;
    }
  }
LABEL_16:
  v20 = DeviceDefaults;
LABEL_17:
  CoTaskMemFree(pv);
  CoTaskMemFree(v15);
  CoTaskMemFree(v34);
  CoTaskMemFree(pAudioFormat);
  return v20;
}

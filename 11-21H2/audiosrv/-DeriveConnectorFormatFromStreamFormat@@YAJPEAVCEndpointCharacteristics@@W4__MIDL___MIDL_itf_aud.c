/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800F2620 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800E80E4 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800E8F38 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180146A08 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **ppIAudioMediaType)
{
  struct tWAVEFORMATEX *v12; // rsi
  struct tWAVEFORMATEX **v13; // rdi
  int v14; // eax
  struct tWAVEFORMATEX *v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rdx
  int v18; // eax
  WAVEFORMATEX *v19; // r15
  __int64 v20; // rdx
  const struct tWAVEFORMATEX *v21; // rax
  const struct tWAVEFORMATEX *v22; // rax
  int DeviceDefaults; // eax
  void *v24; // rdi
  int v25; // eax
  WAVEFORMATEX *v26; // rbx
  __int64 v27; // rdx
  DWORD nSamplesPerSec; // eax
  __int64 v29; // rdx
  const struct tWAVEFORMATEX *v30; // rax
  const struct tWAVEFORMATEX *v31; // rax
  struct tWAVEFORMATEX **v32; // r13
  struct _GUID v34; // [rsp+48h] [rbp-69h] BYREF
  IAudioMediaType *v35[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v36; // [rsp+68h] [rbp-49h] BYREF
  struct tWAVEFORMATEX *v37; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v38; // [rsp+80h] [rbp-31h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+88h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+90h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+98h] [rbp-19h] BYREF
  struct _GUID v42; // [rsp+A8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]

  v12 = 0LL;
  v37 = 0LL;
  v13 = ppIAudioMediaType;
  *ppIAudioMediaType = 0LL;
  v40 = 0LL;
  v14 = CloneWaveFormat(a3, &v40);
  v15 = v40;
  if ( v14 < 0 )
  {
    v16 = -2004287480;
    v17 = 623LL;
LABEL_57:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    goto LABEL_58;
  }
  v34 = *a4;
  v16 = 0;
  if ( (int)CEndpointCharacteristics::GetMixFormat(
              this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              &v34,
              &v37) < 0 )
  {
    v16 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x280,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    v12 = v37;
    goto LABEL_58;
  }
  v34 = *a5;
  v12 = v37;
  if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                       this,
                       &v34,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                       v37,
                       v15,
                       0LL) )
  {
    v16 = -2004287480;
    if ( a7 )
    {
      pAudioFormat = 0LL;
      v34 = *a6;
      v18 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
              (struct CEndpointCharacteristics *)this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              a3,
              &v34,
              &pAudioFormat);
      v19 = pAudioFormat;
      if ( v18 >= 0 )
      {
        ppIAudioMediaType = 0LL;
        *(_QWORD *)&v36.Data1 = 0LL;
        v35[0] = 0LL;
        if ( CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, (IAudioMediaType **)&ppIAudioMediaType) >= 0 )
        {
          v34 = *a5;
          if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                      (CEndpointCharacteristics *)this,
                      &v34,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                      (struct IAudioMediaType *)ppIAudioMediaType,
                      (struct IAudioMediaType **)&v36) >= 0 )
          {
            v34 = *a5;
            if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                        (CEndpointCharacteristics *)this,
                        &v34,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                        *(struct IAudioMediaType **)&v36.Data1,
                        v35,
                        0LL) >= 0 )
            {
              v21 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v35[0]->lpVtbl->GetAudioFormat)(v35[0]);
              v34 = *a5;
              if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                                   this,
                                   &v34,
                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                   v21,
                                   a3,
                                   0LL) )
              {
                v20 = 671LL;
              }
              else
              {
                v22 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX **))&(*ppIAudioMediaType)[2].nSamplesPerSec)(ppIAudioMediaType);
                if ( (int)CloneWaveFormat(v22, v13) >= 0 )
                {
                  if ( *v13 )
                  {
                    v16 = 0;
                    goto LABEL_26;
                  }
                  v20 = 675LL;
                }
                else
                {
                  v20 = 674LL;
                }
              }
            }
            else
            {
              v20 = 668LL;
            }
          }
          else
          {
            v20 = 665LL;
          }
        }
        else
        {
          v20 = 662LL;
        }
        v16 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
LABEL_26:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
LABEL_53:
        CoTaskMemFree(v19);
        goto LABEL_58;
      }
      if ( v18 == -2004287480 )
      {
        pv = 0LL;
        v34 = *a6;
        DeviceDefaults = GetDeviceDefaults(
                           (struct CEndpointCharacteristics *)this,
                           a2,
                           &v34,
                           (struct tWAVEFORMATEX **)&pv,
                           0LL,
                           0LL,
                           0LL);
        v24 = pv;
        if ( DeviceDefaults < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AD,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
LABEL_52:
          CoTaskMemFree(v24);
          goto LABEL_53;
        }
        if ( v15->nSamplesPerSec != *((_DWORD *)pv + 1) )
        {
          *(_QWORD *)&v34.Data1 = 0LL;
          v25 = CloneWaveFormat((const struct tWAVEFORMATEX *)pv, (struct tWAVEFORMATEX **)&v34);
          v26 = *(WAVEFORMATEX **)&v34.Data1;
          if ( v25 < 0 )
          {
            v27 = 690LL;
LABEL_35:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v27,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
LABEL_51:
            CoTaskMemFree(v26);
            goto LABEL_52;
          }
          nSamplesPerSec = v15->nSamplesPerSec;
          *(_DWORD *)(*(_QWORD *)&v34.Data1 + 4LL) = nSamplesPerSec;
          v26->nAvgBytesPerSec = nSamplesPerSec * v26->nBlockAlign;
          v36 = *a6;
          if ( (int)ConnectorSupportsFormat((struct CEndpointCharacteristics *)this, a2, v26, &v36) < 0 )
          {
            v27 = 696LL;
            goto LABEL_35;
          }
          v35[0] = 0LL;
          v38 = 0LL;
          *(_QWORD *)&v36.Data1 = 0LL;
          if ( CreateAudioMediaType(v26, v26->cbSize + 18, v35) >= 0 )
          {
            v42 = *a5;
            if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                        (CEndpointCharacteristics *)this,
                        &v42,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                        v35[0],
                        &v38) >= 0 )
            {
              v42 = *a5;
              if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                          (CEndpointCharacteristics *)this,
                          &v42,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                          v38,
                          (struct IAudioMediaType **)&v36,
                          0LL) >= 0 )
              {
                v30 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v36.Data1 + 40LL))(*(_QWORD *)&v36.Data1);
                v42 = *a5;
                if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                                     this,
                                     &v42,
                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                     v30,
                                     v15,
                                     0LL) )
                {
                  v29 = 713LL;
                }
                else
                {
                  v31 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v35[0]->lpVtbl->GetAudioFormat)(v35[0]);
                  v32 = ppIAudioMediaType;
                  if ( (int)CloneWaveFormat(v31, ppIAudioMediaType) >= 0 )
                  {
                    if ( *v32 )
                    {
                      v16 = 0;
                      goto LABEL_50;
                    }
                    v29 = 717LL;
                  }
                  else
                  {
                    v29 = 716LL;
                  }
                }
              }
              else
              {
                v29 = 709LL;
              }
            }
            else
            {
              v29 = 705LL;
            }
          }
          else
          {
            v29 = 701LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
LABEL_50:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v35);
          goto LABEL_51;
        }
        CoTaskMemFree(pv);
      }
      CoTaskMemFree(pAudioFormat);
    }
    v17 = 725LL;
    goto LABEL_57;
  }
  v34 = *a6;
  if ( (int)GetDeviceDefaults((struct CEndpointCharacteristics *)this, a2, &v34, v13, 0LL, 0LL, 0LL) < 0 )
  {
    v16 = -2004287480;
    v17 = 645LL;
    goto LABEL_57;
  }
  if ( !*v13 )
  {
    v16 = -2004287480;
    v17 = 646LL;
    goto LABEL_57;
  }
LABEL_58:
  CoTaskMemFree(v15);
  CoTaskMemFree(v12);
  return v16;
}

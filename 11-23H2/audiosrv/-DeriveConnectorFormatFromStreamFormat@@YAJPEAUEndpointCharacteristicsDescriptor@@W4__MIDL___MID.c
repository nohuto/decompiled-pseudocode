/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180122990 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005691C (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0C4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     CreateAudioMediaType @ 0x180069884 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008361E (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180114064 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180115124 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescrip.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        EffectPack **a1,
        unsigned __int32 a2,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **ppIAudioMediaType)
{
  struct tWAVEFORMATEX **v11; // r12
  unsigned int v12; // r15d
  struct tWAVEFORMATEX *v13; // rcx
  void *v14; // rcx
  char v15; // al
  const struct tWAVEFORMATEX *v16; // rsi
  struct _GUID *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  WAVEFORMATEX *v20; // rcx
  WAVEFORMATEX *v21; // rbx
  __int64 v22; // rdx
  WAVEFORMATEX *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  const struct tWAVEFORMATEX *v26; // rax
  const struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rcx
  struct tWAVEFORMATEX *v29; // rbx
  struct tWAVEFORMATEX *v30; // rcx
  DWORD nSamplesPerSec; // ecx
  struct tWAVEFORMATEX *v32; // rdi
  __int64 v33; // rdx
  const struct tWAVEFORMATEX *v34; // rax
  const struct tWAVEFORMATEX *v35; // rax
  IAudioMediaType *v37; // [rsp+48h] [rbp-49h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+50h] [rbp-41h] BYREF
  struct tWAVEFORMATEX *Srca[2]; // [rsp+58h] [rbp-39h] BYREF
  struct _GUID v40; // [rsp+68h] [rbp-29h] BYREF
  struct IAudioMediaType *v41; // [rsp+78h] [rbp-19h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+80h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-9h] BYREF
  struct _GUID v44; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+3Fh]

  v42 = 0LL;
  v11 = ppIAudioMediaType;
  *ppIAudioMediaType = 0LL;
  pv = 0LL;
  if ( (int)CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv) >= 0 )
  {
    v40 = *a4;
    if ( (int)EffectPack::GetMixFormat(a1[1], (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2, &v40, &v42) < 0 )
    {
      v12 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x88890008LL);
      v14 = pv;
LABEL_87:
      CoTaskMemFree(v14);
      v13 = v42;
      goto LABEL_88;
    }
    v15 = (unsigned int)AudioPolicyManagerExtension_IsStrictMatchFormatEnforced() != 0;
    LOBYTE(ppIAudioMediaType) = v15;
    v12 = -2004287480;
    v16 = (const struct tWAVEFORMATEX *)pv;
    if ( a7 && v15 )
    {
      v17 = a5;
    }
    else
    {
      v17 = a5;
      v40 = *a5;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                            a1,
                            &v40,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                            v42,
                            (const struct tWAVEFORMATEX *)pv,
                            0LL) )
      {
        v40 = *a6;
        if ( (int)GetDeviceDefaults(
                    a1,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                    &v40,
                    v11,
                    0LL,
                    0LL,
                    0LL) < 0 )
        {
          v18 = 667LL;
LABEL_85:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          goto LABEL_86;
        }
        if ( !*v11 )
        {
          v18 = 668LL;
          goto LABEL_85;
        }
        goto LABEL_33;
      }
      if ( !a7 )
        goto LABEL_84;
      v15 = (char)ppIAudioMediaType;
    }
    pAudioFormat = 0LL;
    if ( v15 )
    {
      v40 = *v17;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                            a1,
                            &v40,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                            v42,
                            v16,
                            0LL) )
      {
        v40 = *a6;
        if ( (int)GetDeviceDefaults(
                    a1,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                    &v40,
                    &pAudioFormat,
                    0LL,
                    0LL,
                    0LL) < 0 )
        {
          v19 = 686LL;
LABEL_18:
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
LABEL_19:
          v20 = pAudioFormat;
LABEL_20:
          CoTaskMemFree(v20);
LABEL_86:
          v14 = (void *)v16;
          goto LABEL_87;
        }
        v21 = pAudioFormat;
        if ( !pAudioFormat )
        {
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AF,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v20 = 0LL;
          goto LABEL_20;
        }
        if ( !(unsigned int)ValidateUncompressedWaveFormatEx(pAudioFormat) )
        {
          if ( (int)CloneWaveFormat(v21, v11) < 0 )
          {
            v22 = 695LL;
LABEL_27:
            v12 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
LABEL_28:
            v20 = v21;
            goto LABEL_20;
          }
          if ( !*v11 )
          {
            v22 = 696LL;
            goto LABEL_27;
          }
          goto LABEL_31;
        }
      }
    }
    v40 = *a6;
    v24 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
            (struct EndpointCharacteristicsDescriptor *)a1,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
            Src,
            &v40,
            &pAudioFormat);
    LODWORD(v37) = v24;
    if ( v24 >= 0 )
    {
      ppIAudioMediaType = 0LL;
      Srca[0] = 0LL;
      v37 = 0LL;
      v21 = pAudioFormat;
      if ( CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, (IAudioMediaType **)&ppIAudioMediaType) >= 0 )
      {
        v40 = *a5;
        if ( (int)EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                    a1[1],
                    &v40,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                    (struct IAudioMediaType *)ppIAudioMediaType,
                    (struct IAudioMediaType **)Srca) >= 0 )
        {
          v40 = *a5;
          if ( (int)EffectPack::DeriveMixFormatFromDevicePipeFormat(
                      a1[1],
                      &v40,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                      (struct IAudioMediaType *)Srca[0],
                      &v37,
                      0LL) >= 0 )
          {
            v26 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37);
            v40 = *a5;
            if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                                 a1,
                                 &v40,
                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                 v26,
                                 Src,
                                 0LL) )
            {
              v25 = 721LL;
            }
            else
            {
              v27 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX **))&(*ppIAudioMediaType)[2].nSamplesPerSec)(ppIAudioMediaType);
              if ( (int)CloneWaveFormat(v27, v11) >= 0 )
              {
                if ( *v11 )
                {
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Srca);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
LABEL_31:
                  v23 = v21;
LABEL_32:
                  CoTaskMemFree(v23);
LABEL_33:
                  v12 = 0;
                  goto LABEL_86;
                }
                v25 = 725LL;
              }
              else
              {
                v25 = 724LL;
              }
            }
          }
          else
          {
            v25 = 718LL;
          }
        }
        else
        {
          v25 = 715LL;
        }
      }
      else
      {
        v25 = 712LL;
      }
      v12 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x88890008LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Srca);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      goto LABEL_28;
    }
    if ( (_BYTE)ppIAudioMediaType )
    {
      v40 = *a5;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                            a1,
                            &v40,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                            v42,
                            v16,
                            0LL) )
      {
        v40 = *a6;
        if ( (int)GetDeviceDefaults(
                    a1,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                    &v40,
                    v11,
                    0LL,
                    0LL,
                    0LL) < 0 )
        {
          v19 = 734LL;
          goto LABEL_18;
        }
        if ( !*v11 )
        {
          v19 = 735LL;
          goto LABEL_18;
        }
        goto LABEL_55;
      }
      v24 = (int)v37;
    }
    if ( v24 == -2004287480 )
    {
      Srca[0] = 0LL;
      v40 = *a6;
      if ( (int)GetDeviceDefaults(
                  a1,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                  &v40,
                  Srca,
                  0LL,
                  0LL,
                  0LL) < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
        v28 = Srca[0];
        goto LABEL_60;
      }
      v29 = Srca[0];
      if ( v16->nSamplesPerSec != Srca[0]->nSamplesPerSec )
      {
        *(_QWORD *)&v40.Data1 = 0LL;
        if ( (int)CloneWaveFormat(Srca[0], (struct tWAVEFORMATEX **)&v40) >= 0 )
        {
          nSamplesPerSec = v16->nSamplesPerSec;
          v32 = *(struct tWAVEFORMATEX **)&v40.Data1;
          *(_DWORD *)(*(_QWORD *)&v40.Data1 + 4LL) = nSamplesPerSec;
          v32->nAvgBytesPerSec = nSamplesPerSec * v32->nBlockAlign;
          v44 = *a6;
          if ( (int)ConnectorSupportsFormat((struct EndpointCharacteristicsDescriptor *)a1, a2, v32, &v44) >= 0 )
          {
            v37 = 0LL;
            v41 = 0LL;
            ppIAudioMediaType = 0LL;
            if ( CreateAudioMediaType(v32, v32->cbSize + 18, &v37) >= 0 )
            {
              v44 = *a5;
              if ( (int)EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                          a1[1],
                          &v44,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                          v37,
                          &v41) >= 0 )
              {
                v44 = *a5;
                if ( (int)EffectPack::DeriveMixFormatFromDevicePipeFormat(
                            a1[1],
                            &v44,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                            v41,
                            (struct IAudioMediaType **)&ppIAudioMediaType,
                            0LL) >= 0 )
                {
                  v34 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX **))&(*ppIAudioMediaType)[2].nSamplesPerSec)(ppIAudioMediaType);
                  v44 = *a5;
                  if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                                       a1,
                                       &v44,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                       v34,
                                       v16,
                                       0LL) )
                  {
                    v33 = 773LL;
                  }
                  else
                  {
                    v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37);
                    if ( (int)CloneWaveFormat(v35, v11) >= 0 )
                    {
                      if ( *v11 )
                      {
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
                        CoTaskMemFree(v32);
                        CoTaskMemFree(v29);
LABEL_55:
                        v23 = pAudioFormat;
                        goto LABEL_32;
                      }
                      v33 = 777LL;
                    }
                    else
                    {
                      v33 = 776LL;
                    }
                  }
                }
                else
                {
                  v33 = 769LL;
                }
              }
              else
              {
                v33 = 765LL;
              }
            }
            else
            {
              v33 = 761LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v33,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F4,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
          }
          v30 = v32;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2EE,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v30 = *(struct tWAVEFORMATEX **)&v40.Data1;
        }
        CoTaskMemFree(v30);
        v28 = v29;
LABEL_60:
        CoTaskMemFree(v28);
        goto LABEL_19;
      }
      CoTaskMemFree(Srca[0]);
    }
    CoTaskMemFree(pAudioFormat);
LABEL_84:
    v18 = 785LL;
    goto LABEL_85;
  }
  v12 = -2004287480;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27A,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x88890008LL);
  CoTaskMemFree(pv);
  v13 = 0LL;
LABEL_88:
  CoTaskMemFree(v13);
  return v12;
}

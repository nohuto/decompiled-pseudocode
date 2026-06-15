/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0B4
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800321B8 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180056B38 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180056C24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18005E438 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180069874 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CAF4 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
        EffectPack *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  int EndpointEffect; // eax
  unsigned int v12; // ebx
  struct IAudioProcessingObject *v13; // rbx
  const struct tWAVEFORMATEX *v14; // rax
  bool v15; // si
  void *v16; // rcx
  IAudioMediaType *v17; // rcx
  HRESULT v18; // eax
  HRESULT v19; // esi
  WAVEFORMATEX *v20; // rcx
  bool v21; // zf
  struct IAudioProcessingObjectVtbl *v22; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rcx
  struct IAudioMediaType *v28; // rsi
  int v29; // eax
  const struct tWAVEFORMATEX *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  __int64 v34; // rax
  HRESULT v35; // eax
  WAVEFORMATEX *v36; // rcx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  struct IAudioProcessingObject **v41; // [rsp+20h] [rbp-61h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+30h] [rbp-51h] BYREF
  IAudioMediaType *v43; // [rsp+38h] [rbp-49h] BYREF
  __int64 v44; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v45; // [rsp+48h] [rbp-39h] BYREF
  int v46; // [rsp+50h] [rbp-31h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+58h] [rbp-29h] BYREF
  struct IAudioProcessingObject *v48; // [rsp+60h] [rbp-21h] BYREF
  __int64 v49; // [rsp+68h] [rbp-19h] BYREF
  WAVEFORMATEX v50; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v51[22]; // [rsp+82h] [rbp+1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v48 = 0LL;
    if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
    {
      v48 = 0LL;
      EndpointEffect = EffectPack::GetEndpointEffect(this, 0, a3, 0LL, &v48, 0LL);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
        goto LABEL_4;
      v32 = 7510LL;
    }
    else
    {
      v48 = 0LL;
      EndpointEffect = EffectPack::GetGfx(this, a3, 0LL, &v48, (struct IAudioSystemEffects2 **)v41);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
      {
LABEL_4:
        v43 = 0LL;
        ppIAudioMediaType = 0LL;
        v13 = v48;
        if ( v10 == 1 )
        {
          *(_OWORD *)&v50.nChannels = 0LL;
          memset(v51, 0, sizeof(v51));
          if ( !v48 )
          {
            v12 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D61,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL);
            goto LABEL_25;
          }
          v49 = 0LL;
          lpVtbl = v48->lpVtbl;
          v49 = 0LL;
          if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, __int64 *))lpVtbl->IsOutputFormatSupported)(
                 v48,
                 0LL,
                 a4,
                 &v49) )
          {
            v12 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D65,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL);
            v26 = &v49;
            goto LABEL_24;
          }
          *(_DWORD *)&v50.wFormatTag = 196606;
          v50.nSamplesPerSec = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                         + 4);
          v50.nBlockAlign = 4 * v50.nChannels;
          v34 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
          v50.nAvgBytesPerSec = *(_DWORD *)(v34 + 4) * v50.nBlockAlign;
          *(_DWORD *)&v50.wBitsPerSample = 1441824;
          strcpy(v51, " ");
          *(_DWORD *)&v51[2] = 3;
          *(GUID *)&v51[6] = GUID_00000003_0000_0010_8000_00aa00389b71;
          v43 = 0LL;
          v35 = CreateAudioMediaType(&v50, 0x28u, &v43);
          v19 = v35;
          if ( v35 >= 0 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
              (__int64 *)&ppIAudioMediaType,
              (__int64)a4);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v49);
            goto LABEL_14;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D76,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v35);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v49);
        }
        else
        {
          pAudioFormat = 0LL;
          *(_QWORD *)&v50.wFormatTag = &pAudioFormat;
          *(_QWORD *)&v50.nAvgBytesPerSec = 0LL;
          LOBYTE(v50.cbSize) = 1;
          v14 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
          v15 = (int)CloneWaveFormat(v14, (struct tWAVEFORMATEX **)&v50.nAvgBytesPerSec) < 0;
          if ( LOBYTE(v50.cbSize) )
          {
            v16 = **(void ***)&v50.wFormatTag;
            **(_QWORD **)&v50.wFormatTag = *(_QWORD *)&v50.nAvgBytesPerSec;
            if ( v16 )
              CoTaskMemFree(v16);
          }
          if ( v15 )
          {
            v12 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D7E,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL);
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pAudioFormat);
            goto LABEL_25;
          }
          ConvertPCMWfxToIEEEFloat(pAudioFormat);
          v17 = ppIAudioMediaType;
          ppIAudioMediaType = 0LL;
          if ( v17 )
            ((void (__fastcall *)(IAudioMediaType *))v17->lpVtbl->Release)(v17);
          v18 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, &ppIAudioMediaType);
          v19 = v18;
          if ( v18 >= 0 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
              (__int64 *)&v43,
              (__int64)ppIAudioMediaType);
            v20 = pAudioFormat;
            pAudioFormat = 0LL;
            if ( v20 )
              CoTaskMemFree(v20);
LABEL_14:
            v45 = 0LL;
            if ( v13 )
            {
              v46 = 0;
              v44 = 0LL;
              v21 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161)) == 0;
              v22 = v13->lpVtbl;
              if ( v21 )
              {
                IsInputFormatSupported = v22->IsInputFormatSupported;
                v24 = v44;
                v44 = 0LL;
                if ( v24 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))IsInputFormatSupported)(
                       v13,
                       ppIAudioMediaType,
                       v43,
                       &v44) < 0 )
                {
                  v25 = 7570LL;
                  goto LABEL_22;
                }
                if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 24LL))(v44, &v46) < 0 )
                {
                  v25 = 7571LL;
                  goto LABEL_22;
                }
                if ( v46 )
                {
                  v25 = 7572LL;
LABEL_22:
                  v12 = -2004287480;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v25,
                    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)0x88890008LL);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
LABEL_23:
                  v26 = (__int64 *)&v45;
LABEL_24:
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v26);
LABEL_25:
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_26:
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v48);
                  return v12;
                }
              }
              else
              {
                IsOutputFormatSupported = v22->IsOutputFormatSupported;
                v38 = v44;
                v44 = 0LL;
                if ( v38 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))IsOutputFormatSupported)(
                       v13,
                       ppIAudioMediaType,
                       v43,
                       &v44) < 0 )
                {
                  v25 = 7577LL;
                  goto LABEL_22;
                }
                if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 24LL))(v44, &v46) < 0 )
                {
                  v25 = 7579LL;
                  goto LABEL_22;
                }
                if ( v46 )
                {
                  v25 = 7580LL;
                  goto LABEL_22;
                }
              }
              wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v45, v44);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
            }
            else
            {
              wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v45, (__int64)v43);
            }
            v28 = v45;
            v29 = ValidateAPOInputFormat(v45);
            v12 = v29;
            if ( v29 < 0 )
            {
              v39 = (unsigned int)v29;
              v40 = 7590LL;
            }
            else
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161))
                || (v30 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType),
                    IsCompressedSpatialFormat(v30))
                || (v31 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->GetAudioFormat)(v28),
                    *(_DWORD *)(v31 + 4) == *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                                      + 4)) )
              {
                v45 = 0LL;
                *a5 = v28;
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
                v12 = 0;
                goto LABEL_26;
              }
              v12 = -2004287480;
              v39 = 2290679816LL;
              v40 = 7597LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v40,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v39);
            goto LABEL_23;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D83,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v18);
          v36 = pAudioFormat;
          pAudioFormat = 0LL;
          if ( v36 )
            CoTaskMemFree(v36);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
        v12 = v19;
        goto LABEL_26;
      }
      v32 = 7506LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D4C,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}

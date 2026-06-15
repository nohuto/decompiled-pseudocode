/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800E884C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180144528 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148D80 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148F40 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18014DAE8 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // r15d
  int EndpointEffect; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  struct IAudioProcessingObject *v15; // rbx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  HRESULT v20; // eax
  const struct tWAVEFORMATEX *v21; // rax
  bool v22; // di
  void *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  HRESULT v26; // eax
  WAVEFORMATEX *v27; // rcx
  WAVEFORMATEX *v28; // rcx
  bool v29; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v32; // rdx
  HRESULT (__stdcall *v33)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v34; // r15
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rdx
  const struct tWAVEFORMATEX *v38; // rax
  __int64 v39; // rbx
  struct IAudioProcessingObject **v40; // [rsp+20h] [rbp-51h]
  WAVEFORMATEX *v41; // [rsp+30h] [rbp-41h] BYREF
  struct IAudioMediaType *v42; // [rsp+38h] [rbp-39h] BYREF
  int v43; // [rsp+40h] [rbp-31h] BYREF
  IAudioMediaType *v44; // [rsp+48h] [rbp-29h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+50h] [rbp-21h] BYREF
  struct IAudioProcessingObject *v46; // [rsp+58h] [rbp-19h] BYREF
  _BYTE pAudioFormat[40]; // [rsp+60h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B96,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  v46 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v46 = 0LL;
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 0, a3, 0LL, &v46, 0LL);
    v13 = EndpointEffect;
    if ( EndpointEffect < 0 )
    {
      v14 = 7072LL;
      goto LABEL_8;
    }
LABEL_9:
    ppIAudioMediaType = 0LL;
    v44 = 0LL;
    v15 = v46;
    if ( v10 == 1 )
    {
      memset(pAudioFormat, 0, sizeof(pAudioFormat));
      if ( !v46 )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BAB,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
LABEL_55:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        goto LABEL_56;
      }
      v42 = 0LL;
      IsOutputFormatSupported = v46->lpVtbl->IsOutputFormatSupported;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v42);
      if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, struct IAudioMediaType **))IsOutputFormatSupported)(
             v15,
             0LL,
             a4,
             &v42) )
      {
        v13 = -2004287480;
        v17 = 2290679816LL;
        v18 = 7087LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v17);
        goto LABEL_54;
      }
      *(_DWORD *)pAudioFormat = 196606;
      *(_DWORD *)&pAudioFormat[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                              + 4);
      *(_WORD *)&pAudioFormat[12] = 4 * *(_WORD *)&pAudioFormat[2];
      v19 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
      *(_DWORD *)&pAudioFormat[8] = *(_DWORD *)(v19 + 4) * *(unsigned __int16 *)&pAudioFormat[12];
      *(_DWORD *)&pAudioFormat[14] = 1441824;
      strcpy(&pAudioFormat[18], " ");
      *(_DWORD *)&pAudioFormat[20] = 3;
      *(GUID *)&pAudioFormat[24] = GUID_00000003_0000_0010_8000_00aa00389b71;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppIAudioMediaType);
      v20 = CreateAudioMediaType((const WAVEFORMATEX *)pAudioFormat, 0x28u, &ppIAudioMediaType);
      v13 = v20;
      if ( v20 < 0 )
      {
        v17 = (unsigned int)v20;
        v18 = 7104LL;
        goto LABEL_16;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v44, (__int64)a4);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
LABEL_29:
      v42 = 0LL;
      if ( v15 )
      {
        v43 = 0;
        v41 = 0LL;
        v29 = (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) == 0;
        lpVtbl = v15->lpVtbl;
        if ( v29 )
        {
          IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v41);
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, WAVEFORMATEX **))IsInputFormatSupported)(
                 v15,
                 v44,
                 ppIAudioMediaType,
                 &v41) < 0 )
          {
            v32 = 7132LL;
LABEL_43:
            v13 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v32,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
            goto LABEL_54;
          }
          if ( (*(int (__fastcall **)(WAVEFORMATEX *, int *))(*(_QWORD *)&v41->wFormatTag + 24LL))(v41, &v43) < 0 )
          {
            v32 = 7133LL;
            goto LABEL_43;
          }
          if ( v43 )
          {
            v32 = 7134LL;
            goto LABEL_43;
          }
        }
        else
        {
          v33 = lpVtbl->IsOutputFormatSupported;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v41);
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, WAVEFORMATEX **))v33)(
                 v15,
                 v44,
                 ppIAudioMediaType,
                 &v41) < 0 )
          {
            v32 = 7139LL;
            goto LABEL_43;
          }
          if ( (*(int (__fastcall **)(WAVEFORMATEX *, int *))(*(_QWORD *)&v41->wFormatTag + 24LL))(v41, &v43) < 0 )
          {
            v32 = 7141LL;
            goto LABEL_43;
          }
          if ( v43 )
          {
            v32 = 7142LL;
            goto LABEL_43;
          }
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v42, (__int64)v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      }
      else
      {
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
          (__int64 *)&v42,
          (__int64)ppIAudioMediaType);
      }
      v34 = v42;
      v35 = ValidateAPOInputFormat(v42);
      v13 = v35;
      if ( v35 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
          || (v38 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44),
              IsCompressedSpatialFormat(v38))
          || (v39 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->GetAudioFormat)(v34),
              *(_DWORD *)(v39 + 4) == *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                                + 4)) )
        {
          v42 = 0LL;
          *a5 = v34;
          v13 = 0;
          goto LABEL_54;
        }
        v13 = -2004287480;
        v36 = 2290679816LL;
        v37 = 7159LL;
      }
      else
      {
        v36 = (unsigned int)v35;
        v37 = 7152LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v36);
LABEL_54:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      goto LABEL_55;
    }
    v41 = 0LL;
    *(_QWORD *)pAudioFormat = &v41;
    *(_QWORD *)&pAudioFormat[8] = 0LL;
    pAudioFormat[16] = 1;
    v21 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
    v22 = (int)CloneWaveFormat(v21, (struct tWAVEFORMATEX **)&pAudioFormat[8]) < 0;
    if ( pAudioFormat[16] )
    {
      v23 = **(void ***)pAudioFormat;
      **(_QWORD **)pAudioFormat = *(_QWORD *)&pAudioFormat[8];
      if ( v23 )
        CoTaskMemFree(v23);
    }
    if ( v22 )
    {
      v13 = -2004287480;
      v24 = 2290679816LL;
      v25 = 7112LL;
    }
    else
    {
      ConvertPCMWfxToIEEEFloat(v41);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v44);
      v26 = CreateAudioMediaType(v41, v41->cbSize + 18, &v44);
      v13 = v26;
      if ( v26 >= 0 )
      {
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
          (__int64 *)&ppIAudioMediaType,
          (__int64)v44);
        v28 = v41;
        v41 = 0LL;
        if ( v28 )
          CoTaskMemFree(v28);
        goto LABEL_29;
      }
      v24 = (unsigned int)v26;
      v25 = 7117LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v24);
    v27 = v41;
    v41 = 0LL;
    if ( v27 )
      CoTaskMemFree(v27);
    goto LABEL_55;
  }
  v46 = 0LL;
  EndpointEffect = CEndpointCharacteristics::GetGfx(this, a3, 0LL, &v46, (struct IAudioSystemEffects2 **)v40);
  v13 = EndpointEffect;
  if ( EndpointEffect >= 0 )
    goto LABEL_9;
  v14 = 7068LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)EndpointEffect);
LABEL_56:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
  return v13;
}

/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180011308 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x1800ED574 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800ED574.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800F08B8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180146A08 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180146F24 (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        int *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  int MixFormat; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // ebx
  int v20; // eax
  RTL_SRWLOCK *v21; // rcx
  int EndpointStore; // eax
  struct IAudioMediaType *v23; // rbx
  int v24; // eax
  struct _GUID v25; // xmm6
  const struct tWAVEFORMATEX *v26; // rax
  void *v27; // rdx
  __int64 v28; // rdx
  HRESULT v29; // eax
  CEndpointCharacteristics *v30; // rdi
  struct _GUID v31; // xmm6
  int v32; // eax
  CEndpointCharacteristics *v33; // rdi
  int v34; // eax
  CEndpointCharacteristics *v35; // rdi
  int v36; // eax
  unsigned __int64 v37; // r9
  __int64 v38; // rdx
  const struct tWAVEFORMATEX *v39; // rax
  void *v40; // rdx
  __int64 v41; // rdi
  double v42; // xmm6_8
  struct _GUID v43; // xmm8
  void *v44; // rdx
  HRESULT AudioMediaType; // eax
  CEndpointCharacteristics *v46; // rdi
  struct _GUID v47; // xmm7
  int SharedModeEnginePeriodicity; // eax
  __int64 v49; // rdx
  const struct tWAVEFORMATEX *v50; // rax
  void *v51; // rdx
  unsigned __int64 v52; // r9
  int v53; // eax
  void *v54; // rdx
  IAudioMediaType *v55; // rcx
  IAudioMediaType *v56; // rcx
  unsigned __int16 *v57; // r9
  int v58; // r8d
  DWORD nSamplesPerSec; // edx
  void *v60; // rax
  WAVEFORMATEX *v61; // rcx
  void *v62; // rcx
  IAudioMediaType *ppIAudioMediaType; // [rsp+88h] [rbp-80h] BYREF
  struct IAudioMediaType *v65; // [rsp+90h] [rbp-78h] BYREF
  CEndpointCharacteristics *v66[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _GUID v67; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v68; // [rsp+B8h] [rbp-50h]
  WAVEFORMATEX *pAudioFormat[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct _GUID v70; // [rsp+D8h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v72; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v73[2]; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v74; // [rsp+118h] [rbp+10h] BYREF
  __int128 v75; // [rsp+128h] [rbp+20h] BYREF
  __int64 v76; // [rsp+138h] [rbp+30h]
  struct tWAVEFORMATEX *v77[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v78; // [rsp+158h] [rbp+50h]
  struct _TP_TIMER *pv[7]; // [rsp+168h] [rbp+60h] BYREF
  IID v80; // [rsp+1A0h] [rbp+98h]
  IID v81; // [rsp+1B0h] [rbp+A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v80 = *(IID *)a3;
  v81 = v80;
  EtwEventActivityIdControl(4LL, &v81);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v10,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod",
    pftDueTime);
  v12 = ValidateVadServerSettings((IID *)a3);
  MixFormat = v12;
  if ( v12 >= 0 )
  {
    v66[0] = 0LL;
    v17 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            v66);
    MixFormat = v17;
    if ( v17 < 0 )
    {
      v18 = 4221LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v17);
LABEL_79:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v66);
      goto LABEL_80;
    }
    v19 = *(_DWORD *)(a3 + 52);
    v20 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v66[0] + 56LL))(v66[0]);
    v17 = DeriveAudioProcessingModeConfiguration(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            (__int64)v66[0],
            v20 == 1,
            0,
            v19,
            0LL,
            0,
            0,
            0LL,
            &v70,
            &v72,
            &v74,
            0LL,
            0LL);
    MixFormat = v17;
    if ( v17 < 0 )
    {
      v18 = 4243LL;
      goto LABEL_7;
    }
    v65 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v21, a2, (struct CEndpointStore **)&v65);
    MixFormat = EndpointStore;
    v23 = v65;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1099,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointStore);
LABEL_77:
      if ( v23 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
      goto LABEL_79;
    }
    v73[0] = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v24 = (*((__int64 (__fastcall **)(struct IAudioMediaTypeVtbl *, __int128 *))v65[13].lpVtbl->QueryInterface + 11))(
            v65[13].lpVtbl,
            &v75);
    v25 = v70;
    if ( v24 >= 0 )
    {
      v68 = v73;
      *(struct _GUID *)v77 = v70;
      v78 = v73;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___(
        (__int64)&v67,
        v75,
        *((__int64 *)&v75 + 1),
        (__int64)v77);
    }
    Src[0] = 0LL;
    pAudioFormat[0] = 0LL;
    *(_QWORD *)v67.Data4 = 0LL;
    LOBYTE(v68) = 1;
    if ( v73[0] )
    {
      *(_QWORD *)&v67.Data1 = pAudioFormat;
      v26 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73[0] + 48LL))(v73[0]);
      MixFormat = CloneWaveFormat(v26, (struct tWAVEFORMATEX **)v67.Data4);
      if ( (_BYTE)v68 )
      {
        v27 = **(void ***)&v67.Data1;
        **(_QWORD **)&v67.Data1 = *(_QWORD *)v67.Data4;
        if ( v27 )
          CoTaskMemFree(v27);
      }
      if ( MixFormat < 0 )
      {
        v28 = 4271LL;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        goto LABEL_70;
      }
      ppIAudioMediaType = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppIAudioMediaType);
      v29 = CreateAudioMediaType(pAudioFormat[0], pAudioFormat[0]->cbSize + 18, &ppIAudioMediaType);
      MixFormat = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10B4,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v29);
LABEL_34:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
LABEL_70:
        v61 = pAudioFormat[0];
        pAudioFormat[0] = 0LL;
        if ( v61 )
          CoTaskMemFree(v61);
        v62 = Src[0];
        Src[0] = 0LL;
        if ( v62 )
          CoTaskMemFree(v62);
        if ( (_QWORD)v75 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
            (__int64 *)v75,
            *((__int64 **)&v75 + 1));
          std::_Deallocate<16,0>((void *)v75, (v76 - v75) & 0xFFFFFFFFFFFFFFF8uLL);
          v75 = 0LL;
          v76 = 0LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v73);
        goto LABEL_77;
      }
      v65 = 0LL;
      v30 = v66[0];
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v65);
      v31 = v72;
      v70 = v72;
      v32 = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
              v30,
              &v70,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              ppIAudioMediaType,
              &v65);
      MixFormat = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10B8,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v32);
LABEL_33:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
        goto LABEL_34;
      }
      *(_QWORD *)&v70.Data1 = 0LL;
      v33 = v66[0];
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v70);
      v72 = v31;
      v34 = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
              v33,
              &v72,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              v65,
              (struct IAudioMediaType **)&v70,
              0LL);
      MixFormat = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10BB,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v34);
LABEL_32:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
        goto LABEL_33;
      }
      *(_QWORD *)&v72.Data1 = 0LL;
      v35 = v66[0];
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v72);
      v74 = v31;
      v36 = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
              v35,
              &v74,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              *(struct IAudioMediaType **)&v70.Data1,
              (struct IAudioMediaType **)&v72);
      MixFormat = v36;
      if ( v36 < 0 )
      {
        v37 = (unsigned int)v36;
        v38 = 4286LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
        goto LABEL_32;
      }
      *(_QWORD *)&v67.Data1 = Src;
      *(_QWORD *)v67.Data4 = 0LL;
      LOBYTE(v68) = 1;
      v39 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v72.Data1 + 40LL))(*(_QWORD *)&v72.Data1);
      MixFormat = CloneWaveFormat(v39, (struct tWAVEFORMATEX **)v67.Data4);
      if ( (_BYTE)v68 )
      {
        v40 = **(void ***)&v67.Data1;
        **(_QWORD **)&v67.Data1 = *(_QWORD *)v67.Data4;
        if ( v40 )
          CoTaskMemFree(v40);
      }
      if ( MixFormat < 0 )
      {
        v37 = (unsigned int)MixFormat;
        v38 = 4288LL;
        goto LABEL_31;
      }
      v41 = v73[0];
      v42 = (double)*(int *)(((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType)
                           + 4);
      *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41) * v42 / 10000000.0 + 0.5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
LABEL_64:
      v57 = (unsigned __int16 *)Src[0];
      v58 = *((_DWORD *)Src[0] + 1);
      nSamplesPerSec = pAudioFormat[0]->nSamplesPerSec;
      if ( v58 != nSamplesPerSec )
        *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v58);
      v60 = MIDL_user_allocate(v57[8] + 18LL);
      *a4 = v60;
      if ( v60 )
      {
        memcpy_0(v60, Src[0], *((unsigned __int16 *)Src[0] + 8) + 18LL);
        MixFormat = 0;
        goto LABEL_70;
      }
      MixFormat = -2147024882;
      v28 = 4326LL;
      goto LABEL_68;
    }
    ppIAudioMediaType = 0LL;
    *(_QWORD *)&v67.Data1 = &ppIAudioMediaType;
    v43 = v74;
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  (struct _RTL_CRITICAL_SECTION *)v66[0],
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                  &v74,
                  (struct tWAVEFORMATEX **)v67.Data4);
    if ( (_BYTE)v68 )
    {
      v44 = **(void ***)&v67.Data1;
      **(_QWORD **)&v67.Data1 = *(_QWORD *)v67.Data4;
      if ( v44 )
        CoTaskMemFree(v44);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C9,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      goto LABEL_60;
    }
    *(_QWORD *)&v70.Data1 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v70);
    AudioMediaType = CreateAudioMediaType(
                       (const WAVEFORMATEX *)ppIAudioMediaType,
                       LOWORD(ppIAudioMediaType[2].lpVtbl) + 18,
                       (IAudioMediaType **)&v70);
    MixFormat = AudioMediaType;
    if ( AudioMediaType < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10CC,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)AudioMediaType);
LABEL_59:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
LABEL_60:
      v55 = ppIAudioMediaType;
      ppIAudioMediaType = 0LL;
      if ( v55 )
        CoTaskMemFree(v55);
      goto LABEL_70;
    }
    v65 = 0LL;
    v46 = v66[0];
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v65);
    v47 = v72;
    v74 = v72;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
                                    v46,
                                    &v74,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                    *(struct IAudioMediaType **)&v70.Data1,
                                    &v65);
    MixFormat = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      v49 = 4303LL;
LABEL_57:
      v52 = (unsigned int)SharedModeEnginePeriodicity;
      goto LABEL_58;
    }
    *(_QWORD *)&v67.Data1 = Src;
    *(_QWORD *)v67.Data4 = 0LL;
    LOBYTE(v68) = 1;
    v50 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v65->lpVtbl->GetAudioFormat)(v65);
    MixFormat = CloneWaveFormat(v50, (struct tWAVEFORMATEX **)v67.Data4);
    if ( (_BYTE)v68 )
    {
      v51 = **(void ***)&v67.Data1;
      **(_QWORD **)&v67.Data1 = *(_QWORD *)v67.Data4;
      if ( v51 )
        CoTaskMemFree(v51);
    }
    if ( MixFormat >= 0 )
    {
      v77[0] = (struct tWAVEFORMATEX *)pAudioFormat;
      v77[1] = 0LL;
      LOBYTE(v78) = 1;
      v53 = *(_DWORD *)(a3 + 68);
      v74 = v25;
      v72 = v47;
      v67 = v43;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    (struct _RTL_CRITICAL_SECTION *)v66[0],
                    *(_DWORD *)(a3 + 52),
                    (struct tWAVEFORMATEX *)ppIAudioMediaType,
                    &v67,
                    &v72,
                    &v74,
                    v53,
                    &v77[1]);
      if ( (_BYTE)v78 )
      {
        v54 = *(void **)v77[0];
        *(_QWORD *)v77[0] = v77[1];
        if ( v54 )
          CoTaskMemFree(v54);
      }
      if ( MixFormat >= 0 )
      {
        v67 = v25;
        SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                        (__int64)v66[0],
                                        *(_DWORD *)(a3 + 52),
                                        pAudioFormat[0],
                                        (__int128 *)&v67,
                                        0,
                                        a5,
                                        0LL,
                                        0LL,
                                        0LL);
        MixFormat = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
          v56 = ppIAudioMediaType;
          ppIAudioMediaType = 0LL;
          if ( v56 )
            CoTaskMemFree(v56);
          goto LABEL_64;
        }
        v49 = 4311LL;
        goto LABEL_57;
      }
      v52 = (unsigned int)MixFormat;
      v49 = 4309LL;
    }
    else
    {
      v52 = (unsigned int)MixFormat;
      v49 = 4305LL;
    }
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v52);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
    goto LABEL_59;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1078,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v12);
LABEL_80:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v14, v15, v16);
  EtwEventActivityIdControl(4LL, &v81);
  return (unsigned int)MixFormat;
}

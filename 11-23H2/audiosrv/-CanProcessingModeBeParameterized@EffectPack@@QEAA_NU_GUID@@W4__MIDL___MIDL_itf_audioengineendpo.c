/*
 * XREFs of ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1CC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B60 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F0FC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall EffectPack::CanProcessingModeBeParameterized(
        EffectPack *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  __int64 *v6; // rsi
  __int64 i; // rax
  __int64 v8; // rcx
  int ModeEffect; // eax
  struct IAudioProcessingObject *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  char v16; // bl
  int v17; // [rsp+20h] [rbp-D8h]
  __int64 v18; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B0h] BYREF
  struct IAudioProcessingObject *v20; // [rsp+50h] [rbp-A8h] BYREF
  struct ICompositeSystemEffect *v21; // [rsp+58h] [rbp-A0h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-98h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  _QWORD v25[7]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v26; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 161) + 212LL) != 1 || !*((_BYTE *)this + 1760) )
    return 0;
  if ( (unsigned __int64)(int)a3 >= *((_QWORD *)this + 157) )
  {
    _o_terminate();
    __debugbreak();
    __debugbreak();
    JUMPOUT(0x1800872E8LL);
  }
  v6 = (__int64 *)(*((_QWORD *)this + 158) + 8LL * (int)a3);
  for ( i = *v6; i; i = *(_QWORD *)i )
  {
    v8 = *(_QWORD *)(i + 8) - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(i + 16) - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return *(_BYTE *)(i + 24);
  }
  v20 = 0LL;
  v21 = 0LL;
  v22 = *a2;
  ModeEffect = EffectPack::GetModeEffect(this, &v22, 1, a3, &v21, &v20, 0LL);
  if ( ModeEffect < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x241F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ModeEffect,
      v17);
  v19 = 0LL;
  v10 = v20;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v20->lpVtbl->QueryInterface)(
      v20,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      &v19);
  v11 = 0LL;
  v18 = 0LL;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
      v10,
      &GUID_25385759_3236_4101_a943_25693dfb5d2d,
      &v18);
    v11 = v18;
  }
  v23 = *a2;
  if ( v19 && v11 )
  {
    LOBYTE(v24) = 1;
  }
  else
  {
    LOBYTE(v24) = 0;
    if ( v21 )
    {
      v12 = *(_QWORD *)v21;
      v25[0] = off_18017D610;
      v25[1] = &v23;
      v26 = v25;
      v13 = (*(__int64 (__fastcall **)(struct ICompositeSystemEffect *, _QWORD *))(v12 + 40))(v21, v25);
      if ( v13 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2438,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13,
          v17);
      if ( v26 )
      {
        v14 = v25;
        LOBYTE(v14) = v26 != v25;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v14);
      }
    }
  }
  *(_QWORD *)&v22.Data1 = v6;
  *(_QWORD *)v22.Data4 = 0LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *(struct _GUID *)(v15 + 8) = v23;
  *(_DWORD *)(v15 + 24) = v24;
  *(_QWORD *)v15 = *v6;
  *v6 = v15;
  v16 = v24;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v21);
  return v16;
}

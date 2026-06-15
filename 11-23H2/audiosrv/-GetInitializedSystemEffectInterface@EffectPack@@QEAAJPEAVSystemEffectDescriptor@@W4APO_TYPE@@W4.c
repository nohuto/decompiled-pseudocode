/*
 * XREFs of ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0
 * Callers:
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004A948 (-GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B60 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DC8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CAA4 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CC0C (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800297B0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18002AD54 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EffectsChainIsValid@CEndpointCharacteristics@@QEAA_NPEAUICompositeSystemEffect@@W4APO_TYPE@@@Z @ 0x180045C00 (-EffectsChainIsValid@CEndpointCharacteristics@@QEAA_NPEAUICompositeSystemEffect@@W4APO_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPack::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int128 *a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11)
{
  unsigned int v14; // edi
  __int64 *v15; // r15
  __int64 *v16; // rsi
  __int64 *v17; // r14
  int SystemEffectClsidsForMode; // eax
  void *v19; // rbx
  int v20; // ecx
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, __int64, __int128 *, _QWORD); // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-28h] BYREF
  LPVOID v35[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v38; // [rsp+C8h] [rbp+48h] BYREF
  int v39; // [rsp+D8h] [rbp+58h]

  v39 = a4;
  v14 = 0;
  v31 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v15 = a9;
  if ( a9 )
    *a9 = 0LL;
  v16 = a10;
  if ( a10 )
    *a10 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2
    || a7 && !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(a1 + 1288)) )
  {
    goto LABEL_20;
  }
  LODWORD(a9) = 0;
  pv = 0LL;
  v36 = *a5;
  SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(a2, &v36, a6 != 0, &a9);
  v14 = SystemEffectClsidsForMode;
  if ( SystemEffectClsidsForMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)SystemEffectClsidsForMode,
      (int)&pv);
    v19 = pv;
LABEL_31:
    CoTaskMemFree(v19);
    goto LABEL_22;
  }
  v19 = pv;
  v14 = 0;
  if ( (_DWORD)a9 )
  {
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 212LL);
    LODWORD(a11) = v39 == 1;
    *(_QWORD *)&v36 = *(_QWORD *)(a1 + 1752);
    v35[0] = pv;
    LODWORD(a10) = v20;
    v38 = a3;
    v21 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
            &v31,
            &v36,
            (int *)&v38,
            (int *)&a11,
            (int *)&a10,
            (unsigned int *)&a9,
            (__int64 *)v35);
    v14 = v21;
    if ( v21 < 0 )
    {
      v27 = 1263LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v21,
        v30);
      goto LABEL_31;
    }
    v14 = 0;
    if ( v16 || v17 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD))(*(_QWORD *)v31 + 24LL);
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL);
      v36 = *a5;
      v30 = a8;
      v21 = v22(v31, v23, &v36, a6);
      v14 = v21;
      if ( v21 >= 0 )
      {
        v14 = 0;
        if ( (unsigned __int8)CEndpointCharacteristics::EffectsChainIsValid(*(_QWORD *)(a1 + 1288), v31, a3) )
        {
          if ( v16 )
          {
            v24 = v33;
            v33 = 0LL;
            *v16 = v24;
          }
          if ( v17 )
          {
            v29 = v32;
            v32 = 0LL;
            *v17 = v29;
          }
        }
        else
        {
          v28 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
        goto LABEL_19;
      }
      v27 = 1267LL;
      goto LABEL_30;
    }
  }
LABEL_19:
  CoTaskMemFree(v19);
LABEL_20:
  if ( v15 )
  {
    v26 = v31;
    v31 = 0LL;
    *v15 = v26;
  }
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v33);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v31);
  return v14;
}

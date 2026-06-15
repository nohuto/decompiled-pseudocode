/*
 * XREFs of ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014D018
 * Callers:
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180150418 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002FE8C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18014BF4C (-FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::InitializeCriticalAPOMetadata(EffectPack *this)
{
  unsigned int v2; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v3; // r14
  __int64 v4; // rax
  int SupportedProcessingModes; // eax
  unsigned int v6; // esi
  signed int v7; // esi
  EffectPack *v8; // rcx
  unsigned int v9; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  signed int v13; // esi
  EffectPack *v14; // rcx
  unsigned int v15; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v16; // rsi
  EffectPack *v17; // rcx
  int EndpointEffect; // r14d
  struct IAudioSystemEffects2 *v20; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h]
  struct _GUID v23; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v24[0] = 0;
  v24[1] = 1;
  v24[2] = 3;
  *((_DWORD *)this + 305) = 1;
  v2 = 0;
  v3 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v4 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 144, v2);
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v4, (__int64)&v21, 1);
    v6 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F0,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
LABEL_31:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
      return v6;
    }
    v7 = 0;
    if ( (int)v22 > 0 )
      break;
LABEL_8:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
    ++v2;
    ++v3;
    if ( v2 >= 3 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v7);
    if ( (int)EffectPack::GetStreamEffect(this, &v23, 1u, *v3, 0LL, 0LL, &v20) >= 0
      && v20
      && (unsigned int)EffectPack::FindCriticalAPO(v8, v20) )
    {
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( ++v7 >= (int)v22 )
      goto LABEL_8;
  }
  *((_DWORD *)this + 301) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_11:
  v9 = 0;
  v10 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v11 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 146, v9);
    v12 = SystemEffectDescriptor::GetSupportedProcessingModes(v11, (__int64)&v21, 1);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x305,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_31;
    }
    v13 = 0;
    if ( (int)v22 > 0 )
      break;
LABEL_18:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
    ++v9;
    ++v10;
    if ( v9 >= 3 )
      goto LABEL_21;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v13);
    if ( (int)EffectPack::GetModeEffect(this, &v23, 1u, *v10, 0LL, 0LL, &v20) >= 0
      && v20
      && (unsigned int)EffectPack::FindCriticalAPO(v14, v20) )
    {
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( ++v13 >= (int)v22 )
      goto LABEL_18;
  }
  *((_DWORD *)this + 302) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_21:
  v15 = 0;
  v16 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v20 = 0LL;
    EndpointEffect = EffectPack::GetEndpointEffect(this, 1u, *v16, 0LL, 0LL, &v20);
    if ( EndpointEffect >= 0 && v20 && (unsigned int)EffectPack::FindCriticalAPO(v17, v20) )
      break;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    ++v15;
    ++v16;
    if ( v15 >= 3 )
      goto LABEL_28;
  }
  *((_DWORD *)this + 303) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
LABEL_28:
  *((_QWORD *)this + 152) = 1LL;
  return (unsigned int)EndpointEffect;
}

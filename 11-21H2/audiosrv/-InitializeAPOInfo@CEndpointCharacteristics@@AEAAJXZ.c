/*
 * XREFs of ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18014A018
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18014CE3C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002C3F0 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x1801478CC (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148D80 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1801490E0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149B64 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo(CEndpointCharacteristics *this)
{
  unsigned int v2; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v3; // r14
  __int64 v4; // rax
  int SupportedProcessingModes; // eax
  unsigned int v6; // esi
  signed int v7; // esi
  CEndpointCharacteristics *v8; // rcx
  unsigned int v9; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  signed int v13; // esi
  CEndpointCharacteristics *v14; // rcx
  unsigned int v15; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v16; // rsi
  CEndpointCharacteristics *v17; // rcx
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
  *((_DWORD *)this + 69) = 1;
  *(_OWORD *)((char *)this + 280) = 0LL;
  v2 = 0;
  v3 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v4 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 224, v2);
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v4, &v21, 1);
    v6 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x332,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
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
    if ( (int)CEndpointCharacteristics::GetStreamEffect(this, &v23, 1u, *v3, 0LL, 0LL, &v20) >= 0
      && v20
      && (unsigned int)CEndpointCharacteristics::FindCriticalAPO(v8, v20) )
    {
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( ++v7 >= (int)v22 )
      goto LABEL_8;
  }
  *((_DWORD *)this + 71) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_11:
  v9 = 0;
  v10 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v11 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 226, v9);
    v12 = SystemEffectDescriptor::GetSupportedProcessingModes(v11, &v21, 1);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x347,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
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
    if ( (int)CEndpointCharacteristics::GetModeEffect(this, &v23, 1u, *v10, 0LL, 0LL, &v20) >= 0
      && v20
      && (unsigned int)CEndpointCharacteristics::FindCriticalAPO(v14, v20) )
    {
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( ++v13 >= (int)v22 )
      goto LABEL_18;
  }
  *((_DWORD *)this + 72) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_21:
  v15 = 0;
  v16 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
  while ( 1 )
  {
    v20 = 0LL;
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 1u, *v16, 0LL, 0LL, &v20);
    if ( EndpointEffect >= 0 && v20 && (unsigned int)CEndpointCharacteristics::FindCriticalAPO(v17, v20) )
      break;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    ++v15;
    ++v16;
    if ( v15 >= 3 )
      goto LABEL_28;
  }
  *((_DWORD *)this + 73) = 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
LABEL_28:
  *((_QWORD *)this + 34) = 1LL;
  return (unsigned int)EndpointEffect;
}

/*
 * XREFs of ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800484F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e06803c0aedafb4181c6469105296c31__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18005D950 (std--_Func_impl_no_alloc__lambda_e06803c0aedafb4181c6469105296c31__long_SystemEffec_ea_18005D950.c)
 *     std::_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18014DC60 (std--_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffec_ea_18014DC60.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180038290 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180048610 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _lambda_7ba40230144b56f0afba59e141973f96_::operator() @ 0x180068A90 (_lambda_7ba40230144b56f0afba59e141973f96_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_54745379ff30d9fd4bff252b54f177dd_::operator() @ 0x180144828 (_lambda_54745379ff30d9fd4bff252b54f177dd_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x180149AE0 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DecideVssEffectUsage(
        CEndpointCharacteristics *this,
        struct SystemEffectDescriptor *a2,
        struct SystemEffectChainDescriptor *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  unsigned __int64 v4; // rbx
  int VirtualSurroundEffectMode; // edi
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  bool v11; // bl
  int v12; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-49h]
  unsigned int v22; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h] BYREF
  struct SystemEffectDescriptor *v26; // [rsp+50h] [rbp-19h]
  CEndpointCharacteristics *v27; // [rsp+58h] [rbp-11h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v28; // [rsp+60h] [rbp-9h]
  __int128 v29; // [rsp+68h] [rbp-1h] BYREF

  v4 = a4;
  v26 = a2;
  v27 = this;
  v28 = a4;
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(this);
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(this, &v22);
      if ( v22 != 1 && v22 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  v8 = 0;
  if ( *((int *)a3 + 2) > 0 )
  {
    v9 = v4;
    while ( 1 )
    {
      v29 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, v8);
      v11 = VirtualSurroundEffectMode != 0;
      if ( VirtualSurroundEffectMode == 2 )
        break;
LABEL_5:
      if ( v9 >= *((_QWORD *)this + 19) )
      {
        _o_terminate(v10);
        __debugbreak();
        JUMPOUT(0x180087C40LL);
      }
      v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)(*((_QWORD *)this + 20) + 16 * v9),
              &v29);
      LODWORD(v21) = 1;
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        v26,
        a3,
        v11,
        (unsigned __int64)&unk_18017E1B8 & -(__int64)v11,
        v21,
        v12 != -1);
      if ( (signed int)++v8 >= *((_DWORD *)a3 + 2) )
        goto LABEL_7;
    }
    v23 = 0LL;
    v25 = 0LL;
    pv = 0LL;
    v22 = 0;
    v11 = 1;
    if ( (int)lambda_7ba40230144b56f0afba59e141973f96_::operator()(&v27, v26, &v29, &v23, &v25) >= 0 )
    {
      v14 = v25;
      if ( v25
        && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v25 + 24LL))(
             v25,
             &pv,
             &v22,
             0LL) >= 0
        && (v15 = 0, v22) )
      {
        while ( 1 )
        {
          v14 = 2LL * v15;
          v16 = *((_QWORD *)pv + 2 * v15) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
          if ( !v16 )
            v16 = *((_QWORD *)pv + 2 * v15 + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
          if ( !v16 )
            break;
          v17 = *((_QWORD *)pv + 2 * v15) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
          if ( !v17 )
            v17 = *((_QWORD *)pv + 2 * v15 + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
          if ( !v17 )
            break;
          if ( ++v15 >= v22 )
          {
            v11 = 1;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        if ( !v23
          || !(unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v14, v23, 48000LL, 6LL)
          && !(unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v18, v23, 48000LL, 8LL)
          && !(unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v19, v23, 44100LL, 6LL)
          && !(unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v20, v23, 44100LL, 8LL) )
        {
          goto LABEL_31;
        }
      }
      v11 = 0;
    }
LABEL_31:
    CoTaskMemFree(pv);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    goto LABEL_5;
  }
LABEL_7:
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}

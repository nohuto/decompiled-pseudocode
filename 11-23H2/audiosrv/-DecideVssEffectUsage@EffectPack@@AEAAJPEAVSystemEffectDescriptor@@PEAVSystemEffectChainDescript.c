/*
 * XREFs of ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002CEDC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180048B00 (std--_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor__.c)
 *     std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180150D20 (std--_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffec_ea_180150D20.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18002CDB8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002D434 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _lambda_508286948f9241bf53db8f8ecb0f45ed_::operator() @ 0x180074498 (_lambda_508286948f9241bf53db8f8ecb0f45ed_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x18014A7F8 (_lambda_09a4ae26156b72c7f708229d4da24567_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18014CE94 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::DecideVssEffectUsage(
        CEndpointCharacteristics **this,
        struct SystemEffectDescriptor *a2,
        struct SystemEffectChainDescriptor *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int VirtualSurroundEffectMode; // edi
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
  unsigned int v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  SystemEffectDescriptor *v25; // [rsp+50h] [rbp-19h]
  CEndpointCharacteristics **v26; // [rsp+58h] [rbp-11h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v27; // [rsp+60h] [rbp-9h]
  __int128 v28; // [rsp+68h] [rbp-1h] BYREF

  v4 = a4;
  v25 = a2;
  v26 = this;
  v27 = a4;
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(this[161]);
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[161]) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(this[161], &v21);
      if ( v21 != 1 && v21 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  v8 = 0;
  if ( *((int *)a3 + 2) > 0 )
  {
    v9 = v4;
    while ( 1 )
    {
      v28 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, v8);
      v11 = VirtualSurroundEffectMode != 0;
      if ( VirtualSurroundEffectMode == 2 )
        break;
LABEL_5:
      if ( v9 >= (unsigned __int64)this[174] )
      {
        _o_terminate(v10);
        __debugbreak();
        JUMPOUT(0x1800958FBLL);
      }
      v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((char *)this[175] + 16 * v9, &v28);
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        v25,
        a3,
        v11,
        (unsigned __int64)&unk_180183810 & -(__int64)v11,
        1u,
        v12 != -1);
      if ( (signed int)++v8 >= *((_DWORD *)a3 + 2) )
        goto LABEL_7;
    }
    v22 = 0LL;
    v24 = 0LL;
    pv = 0LL;
    v21 = 0;
    v11 = 1;
    if ( (int)lambda_508286948f9241bf53db8f8ecb0f45ed_::operator()(&v26, v25, &v28, &v22, &v24) >= 0 )
    {
      v14 = v24;
      if ( v24
        && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v24 + 24LL))(
             v24,
             &pv,
             &v21,
             0LL) >= 0
        && (v15 = 0, v21) )
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
          if ( ++v15 >= v21 )
          {
            v11 = 1;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        if ( !v22
          || !(unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v14, v22, 48000LL, 6LL)
          && !(unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v18, v22, 48000LL, 8LL)
          && !(unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v19, v22, 44100LL, 6LL)
          && !(unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v20, v22, 44100LL, 8LL) )
        {
          goto LABEL_31;
        }
      }
      v11 = 0;
    }
LABEL_31:
    CoTaskMemFree(pv);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    goto LABEL_5;
  }
LABEL_7:
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}

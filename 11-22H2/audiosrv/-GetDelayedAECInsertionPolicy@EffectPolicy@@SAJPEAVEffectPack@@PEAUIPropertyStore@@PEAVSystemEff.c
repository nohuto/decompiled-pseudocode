/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801575B0
 * Callers:
 *     _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075148 (_lambda_cafd355bc8518bdbec11f1f0c823a855_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800297B0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003CEE4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x180157948 (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157A4C (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157B28 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct EffectPack *a1,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  void *v9; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v10; // r15
  int v11; // r12d
  int DefaultEffectChainClsids; // eax
  unsigned int v13; // esi
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // edx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v24; // [rsp+40h] [rbp-89h] BYREF
  int v25; // [rsp+48h] [rbp-81h] BYREF
  BOOL v26; // [rsp+50h] [rbp-79h] BYREF
  int v27; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-69h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-61h] BYREF
  __int64 v30; // [rsp+70h] [rbp-59h] BYREF
  __int64 v31; // [rsp+78h] [rbp-51h] BYREF
  __int64 *v32; // [rsp+80h] [rbp-49h] BYREF
  LPVOID v33; // [rsp+88h] [rbp-41h] BYREF
  struct IPropertyStore *v34; // [rsp+90h] [rbp-39h]
  _QWORD v35[2]; // [rsp+98h] [rbp-31h] BYREF
  LPVOID v36; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-19h] BYREF
  _OWORD v38[5]; // [rsp+C0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  *(_QWORD *)&v38[0] = a4;
  v34 = a2;
  v33 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v30 = 0LL;
  v10 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)((char *)a3 + 48);
  if ( EffectPolicy::IsMicArray(a2, a6)
    && !EffectPolicy::IsValidMicArrayForAEC(*((struct CEndpointCharacteristics **)a1 + 161), *v10, v34, a6) )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 5;
    v11 = 0;
    goto LABEL_35;
  }
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a3,
                               (struct CAudioSignalProcessingModeArray *)v35,
                               &v24,
                               (struct _GUID **)&pv);
  v13 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids >= 0 )
  {
    v14 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                       (unsigned __int64 *)a1 + 174,
                       *(int *)v10);
    v26 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v14, a4) != -1;
    v9 = pv;
    v36 = pv;
    v25 = 1;
    v27 = 2;
    v37 = 0LL;
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
            &v32,
            &v37,
            &v27,
            &v26,
            &v25,
            &v24,
            (__int64 *)&v36);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)(unsigned int)v15);
LABEL_36:
      v13 = v11;
      goto LABEL_37;
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(
      (__int64 *)(*((_QWORD *)a1 + 161) + 40LL),
      &v30);
    v16 = *v32;
    v17 = *v10;
    v38[0] = **(_OWORD **)&v38[0];
    v11 = 0;
    if ( (*(int (__fastcall **)(__int64 *, __int64, _OWORD *, __int64, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _QWORD, __int64 *))(v16 + 24))(
           v32,
           v30,
           v38,
           1LL,
           v17,
           0LL,
           &v31) >= 0
      && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v31 + 24LL))(
           v31,
           &v33,
           &v28,
           0LL) >= 0 )
    {
      *((_DWORD *)a6 + 9) = 0;
      if ( v28 )
      {
        v18 = v33;
        v19 = v28;
        do
        {
          v20 = *v18 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
          if ( *v18 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
            v20 = v18[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
          if ( !v20 )
            *((_DWORD *)a6 + 9) |= 2u;
          v21 = *v18 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
          if ( *v18 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
            v21 = v18[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
          if ( !v21 )
            *((_DWORD *)a6 + 9) |= 4u;
          v22 = *v18 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
          if ( *v18 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
            v22 = v18[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
          if ( !v22 )
            *((_DWORD *)a6 + 9) |= 8u;
          v18 += 2;
          --v19;
        }
        while ( v19 );
      }
    }
    if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*v10 == eKeywordDetectorConnector || (*((_BYTE *)a6 + 36) & 2) != 0) )
    {
      EffectPolicy::IsIntegratedAudioDevice(v34, (int *)a6 + 10);
      if ( *((_DWORD *)a6 + 1) == 2 && *((_DWORD *)a6 + 10) )
      {
        *(_DWORD *)a5 = 2;
        *((_DWORD *)a6 + 16) = 0;
      }
      else if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
      {
        *(_DWORD *)a5 = 0;
        *((_DWORD *)a6 + 16) = 9;
      }
      else
      {
        *(_DWORD *)a5 = 3;
        *((_DWORD *)a6 + 16) = 7;
      }
    }
    else
    {
      *(_DWORD *)a5 = 2;
      *((_DWORD *)a6 + 16) = 8;
    }
LABEL_35:
    *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x136,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids);
  v9 = pv;
LABEL_37:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
  CoTaskMemFree(v9);
  CoTaskMemFree(v33);
  return v13;
}

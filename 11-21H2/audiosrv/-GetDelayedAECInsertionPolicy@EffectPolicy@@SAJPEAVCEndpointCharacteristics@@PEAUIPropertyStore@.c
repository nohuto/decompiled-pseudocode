/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18015017C
 * Callers:
 *     _lambda_d964387455321ab6cd7bc18fda753d22_::operator() @ 0x1800692D8 (_lambda_d964387455321ab6cd7bc18fda753d22_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800107D0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001D970 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18015050C (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180150610 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801506EC (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  _OWORD *v10; // rdi
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v25; // [rsp+40h] [rbp-89h] BYREF
  int v26; // [rsp+48h] [rbp-81h] BYREF
  BOOL v27; // [rsp+50h] [rbp-79h] BYREF
  int v28; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-69h] BYREF
  __int64 v30; // [rsp+68h] [rbp-61h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-59h] BYREF
  LPVOID v32; // [rsp+78h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-49h] BYREF
  __int64 v34; // [rsp+88h] [rbp-41h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-39h] BYREF
  _OWORD *v36; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-19h] BYREF
  struct IPropertyStore *v38; // [rsp+C0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  *(_QWORD *)&v37 = a4;
  v38 = a2;
  v32 = 0LL;
  v10 = 0LL;
  pv = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v34 = 0LL;
  if ( EffectPolicy::IsMicArray(a2, a6) && !EffectPolicy::IsValidMicArrayForAEC(this, a3[12], a2, a6) )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 5;
LABEL_37:
    *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
    v12 = 0;
    goto LABEL_38;
  }
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               (SystemEffectDescriptor *)a3,
                               (struct CAudioSignalProcessingModeArray *)v35,
                               &v25,
                               (struct _GUID **)&pv);
  v12 = DefaultEffectChainClsids;
  v10 = pv;
  if ( DefaultEffectChainClsids >= 0 )
  {
    v14 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                       (unsigned __int64 *)this + 19,
                       *((int *)a3 + 12));
    v27 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v14, a4) != -1;
    v36 = v10;
    v26 = 1;
    v28 = 2;
    DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                 &v31,
                                 &v28,
                                 &v27,
                                 &v26,
                                 &v25,
                                 &v36);
    v12 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v15 = *((_QWORD *)this + 2);
      v34 = v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = *v31;
      v17 = *((_DWORD *)a3 + 12);
      v37 = *(_OWORD *)v37;
      if ( (*(int (__fastcall **)(__int64 *, __int64, __int128 *, __int64, int, _QWORD, __int64 *))(v16 + 24))(
             v31,
             v15,
             &v37,
             1LL,
             v17,
             0LL,
             &v30) >= 0
        && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v30 + 24LL))(
             v30,
             &v32,
             &v29,
             0LL) >= 0 )
      {
        *((_DWORD *)a6 + 9) = 0;
        if ( v29 )
        {
          v18 = 0;
          v19 = v32;
          v20 = v29;
          do
          {
            v21 = *v19 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
            if ( *v19 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
              v21 = v19[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
            if ( !v21 )
            {
              v18 |= 2u;
              *((_DWORD *)a6 + 9) = v18;
            }
            v22 = *v19 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
            if ( *v19 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
              v22 = v19[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
            if ( v22 )
            {
              v18 = *((_DWORD *)a6 + 9);
            }
            else
            {
              v18 |= 4u;
              *((_DWORD *)a6 + 9) = v18;
            }
            v23 = *v19 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
            if ( *v19 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
              v23 = v19[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
            if ( !v23 )
            {
              v18 |= 8u;
              *((_DWORD *)a6 + 9) = v18;
            }
            v19 += 2;
            --v20;
          }
          while ( v20 );
        }
      }
      if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)a3 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
      {
        EffectPolicy::IsIntegratedAudioDevice(v38, (int *)a6 + 10);
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
      goto LABEL_37;
    }
    v13 = 316LL;
  }
  else
  {
    v13 = 307LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids);
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
  CoTaskMemFree(v10);
  CoTaskMemFree(v32);
  return v12;
}

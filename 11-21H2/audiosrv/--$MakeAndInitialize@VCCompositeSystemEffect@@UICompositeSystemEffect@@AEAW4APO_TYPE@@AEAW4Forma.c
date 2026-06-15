/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001D970
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002EC80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     _lambda_7ba40230144b56f0afba59e141973f96_::operator() @ 0x180068A90 (_lambda_7ba40230144b56f0afba59e141973f96_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18015017C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        _OWORD **a6)
{
  unsigned int v10; // edi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  _OWORD *v13; // rbp
  unsigned int v14; // r13d
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  unsigned int v23; // edi
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0;
  *a1 = 0LL;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
    return 2147942414LL;
  v11[11] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>::`vftable';
  *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)v11 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v11 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v12 = &CCompositeSystemEffect::`vftable';
  *((_QWORD *)v12 + 1) = &CCompositeSystemEffect::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v12 + 2) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)v12 + 3) = &CCompositeSystemEffect::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v12 + 4) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)v12 + 8) = 0LL;
  *((_QWORD *)v12 + 9) = 0LL;
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 11) = 0LL;
  *((_QWORD *)v12 + 12) = 0LL;
  *((_QWORD *)v12 + 13) = 0LL;
  v13 = *a6;
  v14 = *a5;
  v15 = *a4;
  v16 = *a3;
  v12[12] = *a2;
  v12[13] = v16;
  v12[14] = v15;
  if ( !v14 )
  {
LABEL_15:
    v23 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v12)(
            v12,
            &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
            a1);
    goto LABEL_16;
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = v12[19];
    if ( v17 != v18 )
    {
      v21 = *((_QWORD *)v12 + 8);
      goto LABEL_12;
    }
    if ( v18 )
    {
      v19 = 2 * v17;
      if ( (v17 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v19 = 1;
    }
    if ( v19 > 0x7FFFFFFuLL )
      break;
    v20 = _o__recalloc(*((_QWORD *)v12 + 8), v19, 16LL);
    v21 = v20;
    if ( !v20 )
      break;
    v12[19] = v19;
    *((_QWORD *)v12 + 8) = v20;
    v17 = v12[18];
LABEL_12:
    v22 = (_OWORD *)(v21 + 16LL * v17);
    if ( v22 )
    {
      *v22 = *v13;
      v17 = v12[18];
    }
    v12[18] = ++v17;
    ++v10;
    ++v13;
    if ( v10 >= v14 )
      goto LABEL_15;
  }
  v23 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v25);
LABEL_16:
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  return v23;
}

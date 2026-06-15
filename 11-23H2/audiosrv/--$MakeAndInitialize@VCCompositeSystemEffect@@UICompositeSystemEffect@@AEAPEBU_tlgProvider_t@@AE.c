/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800297B0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     _lambda_508286948f9241bf53db8f8ecb0f45ed_::operator() @ 0x180074498 (_lambda_508286948f9241bf53db8f8ecb0f45ed_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157560 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ??0CCompositeSystemEffect@@QEAA@XZ @ 0x1800296A0 (--0CCompositeSystemEffect@@QEAA@XZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        __int64 *a7)
{
  CCompositeSystemEffect *v11; // rax
  CCompositeSystemEffect *v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // ebp
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int v21[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CCompositeSystemEffect *v23; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CCompositeSystemEffect *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v11;
  if ( v11 )
  {
    v12 = CCompositeSystemEffect::CCompositeSystemEffect(v11);
    *(_QWORD *)v21 = v12;
    v23 = 0LL;
    v13 = *a7;
    v14 = *a6;
    v15 = *a5;
    v16 = *a4;
    v17 = *a3;
    *((_QWORD *)v12 + 8) = *a2;
    *((_DWORD *)v12 + 18) = v17;
    *((_DWORD *)v12 + 19) = v16;
    *((_DWORD *)v12 + 20) = v15;
    v18 = 0;
    if ( !v14 )
    {
LABEL_5:
      v19 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, _QWORD *))v12)(
              v12,
              &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
              a1);
      (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v12 + 16LL))(v12);
      return v19;
    }
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (char *)v12 + 88,
                            v13 + 16LL * v18) )
    {
      if ( ++v18 >= v14 )
        goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v21[0]);
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(v21);
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v23);
  return 2147942414LL;
}

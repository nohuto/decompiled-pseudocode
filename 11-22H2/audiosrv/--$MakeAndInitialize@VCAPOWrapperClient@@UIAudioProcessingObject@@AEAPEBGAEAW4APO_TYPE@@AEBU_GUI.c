/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002B1C0
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002B6B0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002AE3C (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z.c)
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x18002B028 (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned int *a3,
        int a4)
{
  CAPOWrapperClient *v8; // rax
  CAPOWrapperClient *v9; // rdi
  int v10; // ebx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  CAPOWrapperClient *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CAPOWrapperClient *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12[0] = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v13);
    return (unsigned int)v10;
  }
  v12[1] = v8;
  v9 = CAPOWrapperClient::CAPOWrapperClient(v8);
  v12[0] = v9;
  v13 = 0LL;
  v10 = CAPOWrapperClient::RuntimeClassInitialize((__int64)v9, *a2, *a3, a4);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(v12);
    goto LABEL_7;
  }
  v10 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, _QWORD *))v9)(
          v9,
          &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
          a1);
  (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}

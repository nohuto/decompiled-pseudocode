/*
 * XREFs of ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010CD88
 * Callers:
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010D388 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CVirtualAudioStream@@QEAA@XZ @ 0x18010CF9C (--0CVirtualAudioStream@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180126910 (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualAudioStream,CVirtualAudioStream,IAudioProcess * &,enum _AUDIO_STREAM_EXTENDED_CATEGORY,unsigned short const * &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 &>(
        CVirtualAudioStream **a1,
        struct IAudioProcess **a2,
        unsigned int *a3,
        const unsigned __int16 **a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a5)
{
  void *v9; // rax
  int v10; // edi
  CVirtualAudioStream *v11; // rbx
  CVirtualAudioStream *v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v14);
    return (unsigned int)v10;
  }
  v11 = CVirtualAudioStream::CVirtualAudioStream((CVirtualAudioStream *)v9);
  v13 = v11;
  v14 = 0LL;
  v10 = CVirtualAudioStream::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v13);
    goto LABEL_5;
  }
  if ( v11 )
    (*(void (__fastcall **)(CVirtualAudioStream *))(*(_QWORD *)v11 + 8LL))(v11);
  *a1 = v11;
  if ( v11 )
    (*(void (__fastcall **)(CVirtualAudioStream *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}

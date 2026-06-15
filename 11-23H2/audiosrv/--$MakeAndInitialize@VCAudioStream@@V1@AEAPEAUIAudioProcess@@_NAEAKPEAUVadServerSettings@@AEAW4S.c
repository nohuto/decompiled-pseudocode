/*
 * XREFs of ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Z @ 0x1800102E4
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@@Z @ 0x18000C398 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     ??0CAudioStream@@QEAA@XZ @ 0x180010E90 (--0CAudioStream@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &>(
        CAudioStream **a1,
        __int64 **a2,
        char *a3,
        int *a4,
        __int64 *a5,
        int *a6,
        __int64 *a7)
{
  CAudioStream *v11; // rax
  CAudioStream *v12; // rbx
  int v13; // edi
  CAudioStream *v15; // [rsp+40h] [rbp-28h] BYREF
  CAudioStream *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CAudioStream *)operator new(0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v11;
  v15 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v16);
    return (unsigned int)v13;
  }
  v12 = CAudioStream::CAudioStream(v11);
  v15 = v12;
  v16 = 0LL;
  v13 = CAudioStream::RuntimeClassInitialize((__int64)v12, *a2, *a3, *a4, *a5, *a6, *a7);
  if ( v13 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v15);
    goto LABEL_10;
  }
  if ( v12 )
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v12 + 8LL))(v12);
  *a1 = v12;
  if ( v12 )
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}

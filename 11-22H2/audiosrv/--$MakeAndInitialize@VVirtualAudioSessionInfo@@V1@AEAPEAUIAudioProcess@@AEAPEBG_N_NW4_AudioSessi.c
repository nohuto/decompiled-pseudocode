/*
 * XREFs of ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1801263E4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180126960 (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0VirtualAudioSessionInfo@@QEAA@XZ @ 0x180126508 (--0VirtualAudioSessionInfo@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x180126A84 (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionS.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
        VirtualAudioSessionInfo **a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3,
        bool *a4,
        bool *a5,
        enum _AudioSessionState *a6)
{
  void *v10; // rax
  int v11; // edi
  VirtualAudioSessionInfo *v12; // rbx
  VirtualAudioSessionInfo *v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v15);
    return (unsigned int)v11;
  }
  v12 = VirtualAudioSessionInfo::VirtualAudioSessionInfo((VirtualAudioSessionInfo *)v10);
  v14 = v12;
  v15 = 0LL;
  v11 = VirtualAudioSessionInfo::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
  if ( v11 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v14);
    goto LABEL_5;
  }
  if ( v12 )
    (*(void (__fastcall **)(VirtualAudioSessionInfo *))(*(_QWORD *)v12 + 8LL))(v12);
  *a1 = v12;
  if ( v12 )
    (*(void (__fastcall **)(VirtualAudioSessionInfo *))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}

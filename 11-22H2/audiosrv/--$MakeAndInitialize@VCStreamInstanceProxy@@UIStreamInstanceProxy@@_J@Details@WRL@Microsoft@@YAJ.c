/*
 * XREFs of ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@_J@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@$$QEA_J@Z @ 0x180045ED4
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1801065B0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ??0CStreamInstanceProxy@@QEAA@XZ @ 0x180045F90 (--0CStreamInstanceProxy@@QEAA@XZ.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18004AFF0 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,__int64>(
        _QWORD *a1,
        __int64 *a2)
{
  CStreamInstanceProxy *v4; // rax
  CStreamInstanceProxyImpl *v5; // rdi
  int v6; // ebx
  CStreamInstanceProxy *v8; // [rsp+30h] [rbp+8h] BYREF
  CStreamInstanceProxyImpl *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CStreamInstanceProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v8);
    return (unsigned int)v6;
  }
  v5 = CStreamInstanceProxy::CStreamInstanceProxy(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = CStreamInstanceProxyImpl::Initialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v9);
    goto LABEL_7;
  }
  v6 = (**(__int64 (__fastcall ***)(CStreamInstanceProxyImpl *, GUID *, _QWORD *))v5)(
         v5,
         &GUID_bf352554_52da_43c5_884b_c3e8699ff69a,
         a1);
  (*(void (__fastcall **)(CStreamInstanceProxyImpl *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}

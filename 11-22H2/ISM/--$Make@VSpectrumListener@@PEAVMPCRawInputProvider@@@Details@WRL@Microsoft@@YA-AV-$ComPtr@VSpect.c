/*
 * XREFs of ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800DD4B8
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800DE830 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800DF184 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider *>(
        __int64 *a1,
        struct MPCRawInputProvider **a2)
{
  SpectrumListener *v4; // rax
  volatile int *v5; // rdx
  SpectrumListener *v6; // rdi

  *a1 = 0LL;
  v4 = (SpectrumListener *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = SpectrumListener::SpectrumListener(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
        *a1,
        v5);
    *a1 = (__int64)v6;
  }
  return a1;
}

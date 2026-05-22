/*
 * XREFs of ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091D6C
 * Callers:
 *     ?CreateSharedSpotLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpotLight@345@@Z @ 0x180091CE0 (-CreateSharedSpotLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpotLight@345@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0SpotLight@Composition@UI@Windows@@QEAA@XZ @ 0x180085650 (--0SpotLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A4D8 (-RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?Attach@?$ComPtr@VSpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSpotLight@Composition@UI@Windows@@@Z @ 0x18008DEEC (-Attach@-$ComPtr@VSpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSpotLight@Compositi.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpotLight,Windows::UI::Composition::SpotLight,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::SpotLight **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  Windows::UI::Composition::SpotLight *v7; // rax
  Windows::UI::Composition::SpotLight *v8; // rbx
  Windows::UI::Composition::SpotLight *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::SpotLight *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x190uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::SpotLight *)memset_0(v6, 0, 0x190uLL);
    if ( v7 )
      v7 = Windows::UI::Composition::SpotLight::SpotLight(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::SpotLight>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::SpotLight::s_InterfaceType;
    v10 = Windows::UI::Composition::SpotLight::RuntimeClassInitialize(v9, *a2, *a3);
    if ( v10 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return (unsigned int)v10;
}

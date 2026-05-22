/*
 * XREFs of ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180121254
 * Callers:
 *     ?CreateSharedPointLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIPointLight@345@@Z @ 0x18010F040 (-CreateSharedPointLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIPointLight@345@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0PointLight@Composition@UI@Windows@@QEAA@XZ @ 0x180122B90 (--0PointLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPointLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPointLight@Composition@UI@Windows@@@Z @ 0x180124A88 (-Attach@-$ComPtr@VPointLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPointLight@Composi.c)
 *     ?RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18017A2F0 (-RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::PointLight,Windows::UI::Composition::PointLight,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::PointLight **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::PointLight *v8; // rax
  Windows::UI::Composition::PointLight *v9; // rbx
  Windows::UI::Composition::PointLight *v10; // rcx
  Windows::UI::Composition::PointLight *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x168uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::PointLight *)memset_0(v6, 0, 0x168uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::PointLight *)Windows::UI::Composition::PointLight::PointLight(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::PointLight>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::PointLight::s_InterfaceType;
  v7 = Windows::UI::Composition::PointLight::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}

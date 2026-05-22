/*
 * XREFs of ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121190
 * Callers:
 *     ?CreatePointLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIPointLight@345@@Z @ 0x1801263F0 (-CreatePointLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIPointLight@345@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0PointLight@Composition@UI@Windows@@QEAA@XZ @ 0x180122B90 (--0PointLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPointLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPointLight@Composition@UI@Windows@@@Z @ 0x180124A88 (-Attach@-$ComPtr@VPointLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPointLight@Composi.c)
 *     ?RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18017A2F0 (-RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::PointLight,Windows::UI::Composition::PointLight,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::PointLight **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::PointLight *v6; // rax
  Windows::UI::Composition::PointLight *v7; // rbx
  Windows::UI::Composition::PointLight *v8; // rcx
  Windows::UI::Composition::PointLight *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x168uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::PointLight *)memset_0(v4, 0, 0x168uLL);
  if ( v6 )
    v6 = (Windows::UI::Composition::PointLight *)Windows::UI::Composition::PointLight::PointLight(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::PointLight>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::PointLight::s_InterfaceType;
  v5 = Windows::UI::Composition::PointLight::RuntimeClassInitialize(v8, *a2, 0);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}

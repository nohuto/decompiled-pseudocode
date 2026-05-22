/*
 * XREFs of ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120D34
 * Callers:
 *     ?CreateDistantLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIDistantLight@345@@Z @ 0x180125A70 (-CreateDistantLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIDistantLight@345@@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DistantLight@Composition@UI@Windows@@QEAA@XZ @ 0x180091BD8 (--0DistantLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x180091C34 (-RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?Attach@?$ComPtr@VDistantLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDistantLight@Composition@UI@Windows@@@Z @ 0x180091C9C (-Attach@-$ComPtr@VDistantLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDistantLight@Com.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DistantLight,Windows::UI::Composition::DistantLight,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::DistantLight **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::DistantLight *v6; // rax
  Windows::UI::Composition::DistantLight *v7; // rbx
  Windows::UI::Composition::DistantLight *v8; // rcx
  Windows::UI::Composition::DistantLight *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x150uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::DistantLight *)memset_0(v4, 0, 0x150uLL);
  if ( v6 )
    v6 = Windows::UI::Composition::DistantLight::DistantLight(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::DistantLight>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::DistantLight::s_InterfaceType;
  v5 = Windows::UI::Composition::DistantLight::RuntimeClassInitialize(v8, *a2, 0);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}

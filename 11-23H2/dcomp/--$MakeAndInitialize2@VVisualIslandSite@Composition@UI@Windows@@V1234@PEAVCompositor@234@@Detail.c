/*
 * XREFs of ??$MakeAndInitialize2@VVisualIslandSite@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualIslandSite@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800867D0
 * Callers:
 *     ?CreateVisualIslandSite@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisualIslandSite@345@@Z @ 0x180086740 (-CreateVisualIslandSite@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisualIslandS.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0VisualIslandSite@Composition@UI@Windows@@QEAA@XZ @ 0x180086874 (--0VisualIslandSite@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928 (-RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualIslandSite,Windows::UI::Composition::VisualIslandSite,Windows::UI::Composition::Compositor *>(
        struct IUnknown **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::VisualIslandSite *v5; // rax
  struct IUnknown *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // edi
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x138uLL);
  v10 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::VisualIslandSite *)memset_0(v4, 0, 0x138uLL);
    if ( v5 )
      v6 = (struct IUnknown *)Windows::UI::Composition::VisualIslandSite::VisualIslandSite(v5);
    else
      v6 = 0LL;
    v10 = 0LL;
    v6[1].lpVtbl = (struct IUnknownVtbl *)&Windows::UI::Composition::VisualIslandSite::s_InterfaceType;
    v7 = *a2;
    v11 = v6;
    v8 = Windows::UI::Composition::VisualIslandSite::RuntimeClassInitialize(v6, v7);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
  return (unsigned int)v8;
}

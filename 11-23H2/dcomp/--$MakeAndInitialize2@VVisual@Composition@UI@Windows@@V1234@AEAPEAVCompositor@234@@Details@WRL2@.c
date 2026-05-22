/*
 * XREFs of ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x180086A74
 * Callers:
 *     ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928 (-RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@Windows@@@Z @ 0x180086B2C (-Attach@-$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor * &>(
        Windows::UI::Composition::Visual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rax
  Windows::UI::Composition::Visual *v6; // rbx
  Windows::UI::Composition::Visual *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::Visual *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x128uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (unsigned __int64)memset_0(v4, 0, 0x128uLL);
    if ( v5 )
      v5 = Windows::UI::Composition::Visual::Visual(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Visual>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::Visual::s_InterfaceType;
    v8 = Windows::UI::Composition::Visual::RuntimeClassInitialize(v7, *a2, 0xC4u, 0, 0LL);
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
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}

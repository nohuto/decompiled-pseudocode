/*
 * XREFs of ??$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationController@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800814B8
 * Callers:
 *     ?TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@Z @ 0x1800060C0 (-TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@.c)
 *     ?CreateAnimationController@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationController@345@@Z @ 0x180093570 (-CreateAnimationController@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationCo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0AnimationController@Composition@UI@Windows@@QEAA@XZ @ 0x18008155C (--0AnimationController@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AnimationController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1800815CC (-RuntimeClassInitialize@AnimationController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationController,Windows::UI::Composition::AnimationController,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::AnimationController **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::AnimationController *v5; // rax
  Windows::UI::Composition::AnimationController *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // edi
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::AnimationController *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xE0uLL);
  v10 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::AnimationController *)memset_0(v4, 0, 0xE0uLL);
    if ( v5 )
      v6 = (Windows::UI::Composition::AnimationController *)Windows::UI::Composition::AnimationController::AnimationController(v5);
    else
      v6 = 0LL;
    v10 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::AnimationController::s_InterfaceType;
    v7 = *a2;
    v11 = v6;
    v8 = Windows::UI::Composition::AnimationController::RuntimeClassInitialize(v6, v7);
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

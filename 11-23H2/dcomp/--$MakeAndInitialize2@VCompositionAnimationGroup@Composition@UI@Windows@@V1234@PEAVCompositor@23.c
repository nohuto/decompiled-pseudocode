/*
 * XREFs of ??$MakeAndInitialize2@VCompositionAnimationGroup@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationGroup@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FFAC
 * Callers:
 *     ?CreateAnimationGroup@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAnimationGroup@345@@Z @ 0x180124B60 (-CreateAnimationGroup@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAnima.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionAnimationGroup@Composition@UI@Windows@@QEAA@XZ @ 0x1801227B8 (--0CompositionAnimationGroup@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionAnimationGroup,Windows::UI::Composition::CompositionAnimationGroup,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::CompositionAnimationGroup *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xC0uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::CompositionAnimationGroup *)memset_0(v4, 0, 0xC0uLL);
  if ( v6 )
    v7 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::CompositionAnimationGroup::CompositionAnimationGroup(v6);
  else
    v7 = 0LL;
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionAnimationGroup::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}

/*
 * XREFs of ??$MakeAndInitialize2@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121954
 * Callers:
 *     ?CreateSpringScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUISpringScalarNaturalMotionAnimation@345@@Z @ 0x180127500 (-CreateSpringScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUISpringSca.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122BF8 (--0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18014F3F8 (-RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpringScalarNaturalMotionAnimation,Windows::UI::Composition::SpringScalarNaturalMotionAnimation,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ScalarNaturalMotionAnimation **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::ScalarNaturalMotionAnimation *v6; // rax
  Windows::UI::Composition::ScalarNaturalMotionAnimation *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x1D8uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::ScalarNaturalMotionAnimation *)memset_0(v4, 0, 0x1D8uLL);
  v7 = v6;
  if ( v6 )
  {
    Windows::UI::Composition::ScalarNaturalMotionAnimation::ScalarNaturalMotionAnimation(v6);
    *(_QWORD *)v7 = &Windows::UI::Composition::SpringScalarNaturalMotionAnimation::`vftable';
    *((_DWORD *)v7 + 110) = 1060320051;
    *((_QWORD *)v7 + 56) = 500000LL;
    *((_QWORD *)v7 + 57) = &Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::SpringScalarNaturalMotionAnimation::s_InterfaceType;
  v8 = *a2;
  *((_DWORD *)v7 + 94) = 18;
  v11 = v7;
  v5 = Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}

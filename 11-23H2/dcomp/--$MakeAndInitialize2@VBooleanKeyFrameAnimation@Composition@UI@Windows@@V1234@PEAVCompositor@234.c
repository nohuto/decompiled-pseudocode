/*
 * XREFs of ??$MakeAndInitialize2@VBooleanKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBooleanKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005E8D0
 * Callers:
 *     ?CreateBooleanKeyFrameAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIBooleanKeyFrameAnimation@345@@Z @ 0x18005E840 (-CreateBooleanKeyFrameAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIBoolea.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FA38 (--0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18008300C (-RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOM.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::BooleanKeyFrameAnimation,Windows::UI::Composition::BooleanKeyFrameAnimation,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::KeyFrameAnimation **a1,
        __int64 *a2)
{
  void *v4; // rax
  Windows::UI::Composition::KeyFrameAnimation *v5; // rax
  Windows::UI::Composition::KeyFrameAnimation *v6; // rbx
  __int64 v7; // rdx
  int v8; // edi
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::KeyFrameAnimation *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x200uLL);
  v10 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::KeyFrameAnimation *)memset_0(v4, 0, 0x200uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::KeyFrameAnimation::KeyFrameAnimation(v5);
      *(_QWORD *)v6 = &Windows::UI::Composition::BooleanKeyFrameAnimation::`vftable';
      *((_QWORD *)v6 + 62) = &Windows::UI::Composition::BooleanKeyFrameAnimation::Api::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    v10 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::BooleanKeyFrameAnimation::s_InterfaceType;
    v7 = *a2;
    v11 = v6;
    v8 = Windows::UI::Composition::KeyFrameAnimation::RuntimeClassInitialize(v6, v7, 17LL);
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

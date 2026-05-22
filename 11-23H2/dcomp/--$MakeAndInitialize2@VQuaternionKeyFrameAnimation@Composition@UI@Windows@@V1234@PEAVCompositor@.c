/*
 * XREFs of ??$MakeAndInitialize2@VQuaternionKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVQuaternionKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121314
 * Callers:
 *     ?CreateQuaternionKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIQuaternionKeyFrameAnimation@345@@Z @ 0x18010EF60 (-CreateQuaternionKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIQuaternio.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FA38 (--0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18008300C (-RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOM.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::QuaternionKeyFrameAnimation,Windows::UI::Composition::QuaternionKeyFrameAnimation,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::KeyFrameAnimation *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x200uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::KeyFrameAnimation *)memset_0(v4, 0, 0x200uLL);
  v7 = v6;
  if ( v6 )
  {
    Windows::UI::Composition::KeyFrameAnimation::KeyFrameAnimation(v6);
    *(_QWORD *)v7 = &Windows::UI::Composition::QuaternionKeyFrameAnimation::`vftable';
    *((_QWORD *)v7 + 62) = &Windows::UI::Composition::QuaternionKeyFrameAnimation::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::QuaternionKeyFrameAnimation::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::KeyFrameAnimation::RuntimeClassInitialize((__int64)v7, v8, 71);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}

/*
 * XREFs of ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunction@234@PEAVCompositor@234@MMMM@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAM222@Z @ 0x180079440
 * Callers:
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079408 (--0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z @ 0x180079CE0 (-RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Attach@?$ComPtr@VCubicBezierEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCubicBezierEasingFunction@Composition@UI@Windows@@@Z @ 0x180079ECC (-Attach@-$ComPtr@VCubicBezierEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCub.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CubicBezierEasingFunction,Windows::UI::Composition::CompositionEasingFunction,Windows::UI::Composition::Compositor *,float,float,float,float>(
        Windows::UI::Composition::CubicBezierEasingFunction **a1,
        struct Windows::UI::Composition::Compositor **a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  void *v10; // rax
  Windows::UI::Composition::CubicBezierEasingFunction *v11; // rax
  Windows::UI::Composition::CubicBezierEasingFunction *v12; // rbx
  Windows::UI::Composition::CubicBezierEasingFunction *v13; // rcx
  int v14; // edi
  void *v16; // [rsp+30h] [rbp-28h] BYREF
  Windows::UI::Composition::CubicBezierEasingFunction *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v10 = DefaultHeap::Alloc(0xB8uLL);
  v16 = v10;
  if ( v10 )
  {
    v11 = (Windows::UI::Composition::CubicBezierEasingFunction *)memset_0(v10, 0, 0xB8uLL);
    if ( v11 )
      v11 = Windows::UI::Composition::CubicBezierEasingFunction::CubicBezierEasingFunction(v11);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CubicBezierEasingFunction>::Attach(&v17, v11);
    v12 = v17;
    v16 = 0LL;
    v13 = v17;
    *((_QWORD *)v17 + 1) = &Windows::UI::Composition::CubicBezierEasingFunction::s_InterfaceType;
    v14 = Windows::UI::Composition::CubicBezierEasingFunction::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6);
    if ( v14 >= 0 )
    {
      *a1 = v12;
      return 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
  return (unsigned int)v14;
}

/*
 * XREFs of ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVCubicBezierEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x180079BC0
 * Callers:
 *     ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numerics@Foundation@4@0PEAPEAVCubicBezierEasingFunction@234@@Z @ 0x180079B5C (-CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numer.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z @ 0x180079CE0 (-RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CubicBezierEasingFunction,Windows::UI::Composition::CubicBezierEasingFunction,Windows::UI::Composition::Compositor *,float &,float &,float &,float &>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  HANDLE ProcessHeap; // rax
  void *v11; // rax
  Windows::UI::Composition::CompositionObject *v12; // rax
  Windows::UI::Composition::CompositionObject *v13; // rbx
  float v14; // xmm3_4
  float v15; // xmm2_4
  struct Windows::UI::Composition::Compositor *v16; // rdx
  int v17; // edi
  float v19; // [rsp+28h] [rbp-30h]
  Windows::UI::Composition::CompositionObject *v20; // [rsp+30h] [rbp-28h] BYREF
  void *v21; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v20 = 0LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0xB8uLL);
  v21 = v11;
  if ( v11 )
  {
    v12 = (Windows::UI::Composition::CompositionObject *)memset_0(v11, 0, 0xB8uLL);
    v13 = v12;
    if ( v12 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v12);
      *((_QWORD *)v13 + 16) = &Windows::UI::Composition::CompositionEasingFunction::Api::`vftable';
      *(_QWORD *)v13 = &Windows::UI::Composition::CubicBezierEasingFunction::`vftable';
      *((_QWORD *)v13 + 19) = &Windows::UI::Composition::CubicBezierEasingFunction::Api::`vftable';
    }
    else
    {
      v13 = 0LL;
    }
    v21 = 0LL;
    *((_QWORD *)v13 + 1) = &Windows::UI::Composition::CubicBezierEasingFunction::s_InterfaceType;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v19 = *a6;
    v20 = v13;
    v17 = Windows::UI::Composition::CubicBezierEasingFunction::RuntimeClassInitialize(v13, v16, v15, v14, *a5, v19);
    if ( v17 >= 0 )
    {
      *a1 = v13;
      return 0LL;
    }
  }
  else
  {
    v17 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v21);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
  return (unsigned int)v17;
}

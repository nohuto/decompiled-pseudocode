/*
 * XREFs of ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numerics@Foundation@4@0PEAPEAVCubicBezierEasingFunction@234@@Z @ 0x180079B5C
 * Callers:
 *     ?CreateCubicBezierEasingFunction@Api@Compositor@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@0PEAPEAUICubicBezierEasingFunction@345@@Z @ 0x180079AD0 (-CreateCubicBezierEasingFunction@Api@Compositor@Composition@UI@Windows@@UEAAJUVector2@Numerics@F.c)
 *     ?CreateCubicBezierEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@UVector2@Numerics@Foundation@4@1PEAPEAUICubicBezierEasingFunction@234@@Z @ 0x18012E840 (-CreateCubicBezierEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVCubicBezierEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x180079BC0 (--$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateCubicBezierEasingFunction(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::Foundation::Numerics::Vector2 *a2,
        struct Windows::Foundation::Numerics::Vector2 *a3,
        struct Windows::UI::Composition::CubicBezierEasingFunction **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::CubicBezierEasingFunction *v9; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositorCommon *v10; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  v10 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CubicBezierEasingFunction,Windows::UI::Composition::CubicBezierEasingFunction,Windows::UI::Composition::Compositor *,float &,float &,float &,float &>(
         (unsigned int)&v9,
         (unsigned int)&v10,
         (_DWORD)a2,
         (int)a2 + 4,
         (__int64)a3,
         (__int64)a3 + 4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    return v6;
  }
  else
  {
    *a4 = v9;
    return 0LL;
  }
}

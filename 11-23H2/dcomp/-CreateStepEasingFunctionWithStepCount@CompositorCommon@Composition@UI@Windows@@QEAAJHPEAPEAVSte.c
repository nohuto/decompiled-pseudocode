/*
 * XREFs of ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z @ 0x1800797D0
 * Callers:
 *     ?CreateStepEasingFunction@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIStepEasingFunction@345@@Z @ 0x180083C20 (-CreateStepEasingFunction@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIStepEasingFu.c)
 *     ?CreateStepEasingFunctionWithStepCount@Api@CompositorCommon@Composition@UI@Windows@@UEAAJHPEAPEAUIStepEasingFunction@345@@Z @ 0x180127860 (-CreateStepEasingFunctionWithStepCount@Api@CompositorCommon@Composition@UI@Windows@@UEAAJHPEAPEA.c)
 *     ?CreateStepEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUIStepEasingFunction@234@@Z @ 0x18012F170 (-CreateStepEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICom.c)
 *     ?CreateStepEasingFunctionWithStepCount@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@HPEAPEAUIStepEasingFunction@234@@Z @ 0x18012F2F0 (-CreateStepEasingFunctionWithStepCount@CompositionEasingFunctionStatics@Composition@UI@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@Details@WRL2@Microsoft@@YAJPEAPEAVStepEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAH@Z @ 0x180079828 (--$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateStepEasingFunctionWithStepCount(
        Windows::UI::Composition::CompositorCommon *this,
        int a2,
        struct Windows::UI::Composition::StepEasingFunction **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::StepEasingFunction *v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF
  Windows::UI::Composition::CompositorCommon *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *a3 = 0LL;
  v8 = 0LL;
  v10 = this;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::StepEasingFunction,Windows::UI::Composition::StepEasingFunction,Windows::UI::Composition::Compositor *,int &>(
         &v8,
         &v10,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x983,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
    return v5;
  }
  else
  {
    *a3 = v8;
    return 0LL;
  }
}

/*
 * XREFs of ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18014F3F8
 * Callers:
 *     ??$MakeAndInitialize2@VBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011F938 (--$MakeAndInitialize2@VBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVComp.c)
 *     ??$MakeAndInitialize2@VBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FA28 (--$MakeAndInitialize2@VBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FB18 (--$MakeAndInitialize2@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121954 (--$MakeAndInitialize2@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVComp.c)
 *     ??$MakeAndInitialize2@VSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121A44 (--$MakeAndInitialize2@VSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121B34 (--$MakeAndInitialize2@VSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x180161E74 (-RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 *     ?RuntimeClassInitialize@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180162834 (-RuntimeClassInitialize@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RuntimeClassInitialize@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x180167710 (-RuntimeClassInitialize@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor.c)
 *     ?RuntimeClassInitialize@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x1801680C0 (-RuntimeClassInitialize@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVComposito.c)
 *     ?RuntimeClassInitialize@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x180168670 (-RuntimeClassInitialize@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVComposito.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 74) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}

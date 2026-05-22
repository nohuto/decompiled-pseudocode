/*
 * XREFs of ?RuntimeClassInitialize@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18013E8E8
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013E648 (--$MakeAndInitialize2@VInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::RuntimeClassInitialize(
        Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 36) = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontrackervector2inertiamodifier.cpp",
      (const char *)(unsigned int)v3);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontrackervector2inertianaturalmotion.cpp",
      (const char *)v4);
    return v4;
  }
}

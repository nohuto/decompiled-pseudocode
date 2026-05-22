/*
 * XREFs of ?RuntimeClassInitialize@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@W4InertiaModifierType@@@Z @ 0x18019048C
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013D430 (--$MakeAndInitialize2@VInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows.c)
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013DADC (--$MakeAndInitialize2@VInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@V123.c)
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013E04C (--$MakeAndInitialize2@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionObject *a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(a1, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)a1 + 36) = a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontrackerinertiamodifier.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}

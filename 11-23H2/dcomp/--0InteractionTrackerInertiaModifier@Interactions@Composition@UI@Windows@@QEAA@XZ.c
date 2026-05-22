/*
 * XREFs of ??0InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18013D540
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013D430 (--$MakeAndInitialize2@VInteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows.c)
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013DADC (--$MakeAndInitialize2@VInteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@V123.c)
 *     ??$MakeAndInitialize2@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013E04C (--$MakeAndInitialize2@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Window.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::InteractionTrackerInertiaModifier(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Scenes::SceneBoundingBox::ApiSceneObject::`vftable';
  return this;
}

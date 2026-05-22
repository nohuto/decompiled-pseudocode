/*
 * XREFs of ??0InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18013E700
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013E648 (--$MakeAndInitialize2@VInteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::InteractionTrackerVector2InertiaNaturalMotion(
        Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion *this)
{
  Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Scenes::SceneBoundingBox::ApiSceneObject::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::Api::`vftable';
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}

/*
 * XREFs of ??0ManipulationTransform@Composition@UI@Windows@@QEAA@XZ @ 0x18008222C
 * Callers:
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180081FA4 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAUIDCompositionTransform@@@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAUIDCompositionTransform@@@Z @ 0x180082180 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ManipulationTransform *__fastcall Windows::UI::Composition::ManipulationTransform::ManipulationTransform(
        Windows::UI::Composition::ManipulationTransform *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::ManipulationTransform::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::ManipulationTransform::Partner::`vftable';
  return this;
}

/*
 * XREFs of ??0CompositionContainerShape@Composition@UI@Windows@@QEAA@XZ @ 0x18005CDE0
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionContainerShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005CD24 (--$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionContainerShape *__fastcall Windows::UI::Composition::CompositionContainerShape::CompositionContainerShape(
        Windows::UI::Composition::CompositionContainerShape *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionShape::Api::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionContainerShapeT<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionShape>::`vftable';
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionContainerShapeT<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionShape>::Api::`vftable';
  *((_BYTE *)this + 192) &= 0xFCu;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionContainerShape::`vftable'{for `Windows::UI::Composition::CompositionContainerShapeT<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionShape>'};
  *((_QWORD *)this + 22) = &Windows::UI::Composition::CompositionContainerShape::`vftable'{for `Windows::UI::Composition::ShapeContainer'};
  return this;
}

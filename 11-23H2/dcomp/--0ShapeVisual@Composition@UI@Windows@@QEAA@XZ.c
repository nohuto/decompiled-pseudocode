/*
 * XREFs of ??0ShapeVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D430
 * Callers:
 *     ??$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVShapeVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005D4B4 (--$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL.c)
 * Callees:
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ShapeVisual *__fastcall Windows::UI::Composition::ShapeVisual::ShapeVisual(
        Windows::UI::Composition::ShapeVisual *this)
{
  Windows::UI::Composition::ShapeVisual *result; // rax

  Windows::UI::Composition::Visual::Visual(this);
  *(_QWORD *)this = &Windows::UI::Composition::ContainerVisual::`vftable';
  *((_QWORD *)this + 37) = &Windows::UI::Composition::ContainerVisual::Api::`vftable';
  *((_BYTE *)this + 328) &= 0xFCu;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::ShapeVisual::`vftable'{for `Windows::UI::Composition::ContainerVisual'};
  *((_QWORD *)this + 39) = &Windows::UI::Composition::ShapeVisual::`vftable'{for `Windows::UI::Composition::ShapeContainer'};
  *((_QWORD *)this + 44) = &Windows::UI::Composition::ShapeVisual::Api::`vftable';
  result = this;
  *((_QWORD *)this + 46) = 0LL;
  return result;
}

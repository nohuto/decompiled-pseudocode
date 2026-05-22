/*
 * XREFs of ??0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ @ 0x18001CBE4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001CB34 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVComposito.c)
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18008ABA4 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@_ea_18008ABA4.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionPointerEventRouter *__fastcall Windows::UI::Composition::CompositionPointerEventRouter::CompositionPointerEventRouter(
        Windows::UI::Composition::CompositionPointerEventRouter *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionPointerEventRouter::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionPointerEventRouter::Partner::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return this;
}

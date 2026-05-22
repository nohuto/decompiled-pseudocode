/*
 * XREFs of ??0CompositionManipulation@Composition@UI@Windows@@QEAA@XZ @ 0x180153180
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4SystemManipulationMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionManipulation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4SystemManipulationMode@@@Z @ 0x1801530C4 (--$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

Windows::UI::Composition::CompositionManipulation *__fastcall Windows::UI::Composition::CompositionManipulation::CompositionManipulation(
        Windows::UI::Composition::CompositionManipulation *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionManipulation::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionManipulation::Partner::`vftable';
  `vector constructor iterator'(
    (char *)this + 168,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  return this;
}

/*
 * XREFs of ??0CompositionAnchor@Composition@UI@Windows@@QEAA@XZ @ 0x18006C7D8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnchor@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18006C734 (--$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@W.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionAnchor *__fastcall Windows::UI::Composition::CompositionAnchor::CompositionAnchor(
        Windows::UI::Composition::CompositionAnchor *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionAnchor::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionAnchor::Private::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_QWORD *)this + 37) = 0LL;
  return this;
}

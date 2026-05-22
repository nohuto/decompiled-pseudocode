/*
 * XREFs of ??0CompositionProjectedShadow@Composition@UI@Windows@@QEAA@XZ @ 0x18000E204
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadow@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18000E160 (--$MakeAndInitialize2@VCompositionProjectedShadow@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionProjectedShadow *__fastcall Windows::UI::Composition::CompositionProjectedShadow::CompositionProjectedShadow(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionProjectedShadow::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionProjectedShadow::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionProjectedShadow::Velocity::`vftable';
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}

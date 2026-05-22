/*
 * XREFs of ??0CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801229C4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801209AC (--$MakeAndInitialize2@VCompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@V12345@.c)
 *     ??0CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122A4C (--0CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Internal::CompositionSuperWetInkSource *__fastcall Windows::UI::Composition::Internal::CompositionSuperWetInkSource::CompositionSuperWetInkSource(
        Windows::UI::Composition::Internal::CompositionSuperWetInkSource *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Internal::CompositionSuperWetInkSource::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Internal::VisualReference::Api::`vftable';
  return this;
}

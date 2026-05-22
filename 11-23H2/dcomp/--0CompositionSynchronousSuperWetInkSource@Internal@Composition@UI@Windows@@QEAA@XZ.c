/*
 * XREFs of ??0CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122A4C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801208F4 (--$MakeAndInitialize2@VCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@.c)
 * Callees:
 *     ??0CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801229C4 (--0CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *__fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::CompositionSynchronousSuperWetInkSource(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *this)
{
  Windows::UI::Composition::Internal::CompositionSuperWetInkSource::CompositionSuperWetInkSource(this);
  *(_QWORD *)this = &Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  return this;
}

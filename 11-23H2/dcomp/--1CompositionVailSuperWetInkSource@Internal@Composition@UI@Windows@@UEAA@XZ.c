/*
 * XREFs of ??1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180123158
 * Callers:
 *     ??_ECompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123E30 (--_ECompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::~CompositionVailSuperWetInkSource(
        Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *this)
{
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 23);
  Windows::UI::Composition::Internal::CompositionSuperWetInkSource::~CompositionSuperWetInkSource(this);
}

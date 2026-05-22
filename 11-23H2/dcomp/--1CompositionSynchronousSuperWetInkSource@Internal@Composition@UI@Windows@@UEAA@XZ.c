/*
 * XREFs of ??1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1801230E4
 * Callers:
 *     ??_GCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123DE0 (--_GCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::~CompositionSynchronousSuperWetInkSource(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 27);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 26);
  if ( v3 )
    operator delete(v3);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease((DirectComposition::CDelayedDestructionObject **)this + 25);
  v4 = (void *)*((_QWORD *)this + 24);
  if ( v4 )
    operator delete(v4);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease((DirectComposition::CDelayedDestructionObject **)this + 23);
  Windows::UI::Composition::Internal::CompositionSuperWetInkSource::~CompositionSuperWetInkSource(this);
}

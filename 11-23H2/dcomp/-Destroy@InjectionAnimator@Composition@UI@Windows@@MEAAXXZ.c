/*
 * XREFs of ?Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019B810
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104 (--$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectCo.c)
 */

void __fastcall Windows::UI::Composition::InjectionAnimator::Destroy(
        DirectComposition::CDelayedDestructionObject **this)
{
  ReleaseInterface<DirectComposition::CSharedAllocation>(this + 37);
  Windows::UI::Composition::CompositionPropertyAnimator::Destroy((Windows::UI::Composition::CompositionPropertyAnimator *)this);
}

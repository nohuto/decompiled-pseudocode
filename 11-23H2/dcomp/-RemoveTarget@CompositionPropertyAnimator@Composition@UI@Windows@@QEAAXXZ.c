/*
 * XREFs of ?RemoveTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXXZ @ 0x180191038
 * Callers:
 *     ?Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ @ 0x1801905E0 (-Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::RemoveTarget(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  if ( (*((_BYTE *)this + 152) & 1) != 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      0LL);
    *((_BYTE *)this + 152) &= ~1u;
  }
}

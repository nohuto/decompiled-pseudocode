/*
 * XREFs of DCompositionCreateTargetForHandle @ 0x180102E40
 * Callers:
 *     DCompositionCreateCrossDeviceVisual @ 0x1800FF5D0 (DCompositionCreateCrossDeviceVisual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionCreateTargetForHandle(void *a1, struct Windows::UI::Composition::CSharedTarget **a2)
{
  if ( !a1 || !a2 )
    return 2147942487LL;
  *a2 = 0LL;
  return Windows::UI::Composition::CSharedTarget::Create(a1, a2);
}

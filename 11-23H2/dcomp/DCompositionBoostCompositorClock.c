/*
 * XREFs of DCompositionBoostCompositorClock @ 0x1800FF5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DCompositionBoostCompositorClock()
{
  int v0; // eax

  v0 = NtDCompositionBoostCompositorClock();
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v0);
}

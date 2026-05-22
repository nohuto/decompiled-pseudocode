/*
 * XREFs of DwmEnableMMCSS @ 0x1800FF440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __stdcall DwmEnableMMCSS(BOOL fEnableMMCSS)
{
  int v1; // eax

  v1 = NtDCompositionEnableMMCSS(fEnableMMCSS);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}

/*
 * XREFs of ?GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAPEAVIDeviceTarget@@XZ @ 0x180120F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetCurrentBackBuffer(__int64 a1)
{
  return CConversionSwapChain::GetCurrentBackBuffer((CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 856));
}

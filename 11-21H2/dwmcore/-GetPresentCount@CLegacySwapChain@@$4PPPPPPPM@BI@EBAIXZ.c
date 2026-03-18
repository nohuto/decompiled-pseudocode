/*
 * XREFs of ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x180109EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPresentCount(__int64 a1)
{
  return CLegacySwapChain::GetPresentCount((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 24));
}

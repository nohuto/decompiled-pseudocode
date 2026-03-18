/*
 * XREFs of ?SetAlphaMode@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180109170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetAlphaMode(__int64 a1, enum DXGI_ALPHA_MODE a2)
{
  CLegacySwapChain::SetAlphaMode((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}

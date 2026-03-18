/*
 * XREFs of ?Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18011C7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Present(__int64 a1, unsigned __int8 a2)
{
  return CLegacyRenderTarget::Present((struct IOverlaySwapChain **)(a1 - *(int *)(a1 - 4)), a2);
}

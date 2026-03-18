/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@UEAAX_N@Z @ 0x1801083F0
 * Callers:
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z @ 0x18011F8D0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@7EAAX_N@Z @ 0x180120970 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@7EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z @ 0x180121030 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetFrontBufferRenderingOnNextFrame(CLegacySwapChain *this, char a2)
{
  *((_BYTE *)this - 86) = a2;
}

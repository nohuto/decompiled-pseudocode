/*
 * XREFs of ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ @ 0x18028ADC8
 * Callers:
 *     ?CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x180108CF0 (-CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckIndependentFlipSupport(CLegacySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this - 42) + 588LL) >= 1300;
}

/*
 * XREFs of ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ @ 0x18029AAD0
 * Callers:
 *     ?CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ @ 0x18011F700 (-CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckIndependentFlipSupport(CLegacySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 10) + 588LL) >= 1300;
}

/*
 * XREFs of ?CheckOcclusionState@CDDARenderTarget@@UEAAJXZ @ 0x18013176A
 * Callers:
 *     ?CheckOcclusionState@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x18011D960 (-CheckOcclusionState@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18013178C (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::CheckOcclusionState(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 2136));
  return 142213121LL;
}

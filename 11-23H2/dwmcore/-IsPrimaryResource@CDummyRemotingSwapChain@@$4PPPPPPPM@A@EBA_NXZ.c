/*
 * XREFs of ?IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDummyRemotingSwapChain::IsPrimaryResource(__int64 a1)
{
  return CDDisplaySwapChain::IsPrimaryResource((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4)));
}

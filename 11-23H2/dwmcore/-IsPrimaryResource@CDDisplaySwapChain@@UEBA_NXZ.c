/*
 * XREFs of ?IsPrimaryResource@CDDisplaySwapChain@@UEBA_NXZ @ 0x180108150
 * Callers:
 *     ?IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E970 (-IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x1801207D0 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x180120E90 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDDisplaySwapChain::IsPrimaryResource(CDDisplaySwapChain *this)
{
  return 1;
}

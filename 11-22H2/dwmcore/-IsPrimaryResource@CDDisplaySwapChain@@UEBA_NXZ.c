/*
 * XREFs of ?IsPrimaryResource@CDDisplaySwapChain@@UEBA_NXZ @ 0x180108250
 * Callers:
 *     ?IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011ECA0 (-IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x180120B00 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1801211C0 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDDisplaySwapChain::IsPrimaryResource(CDDisplaySwapChain *this)
{
  return 1;
}

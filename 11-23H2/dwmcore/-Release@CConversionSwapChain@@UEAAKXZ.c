/*
 * XREFs of ?Release@CConversionSwapChain@@UEAAKXZ @ 0x1800FA8B0
 * Callers:
 *     ?Release@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011E9D0 (-Release@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ @ 0x18011F830 (-Release@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ.c)
 *     ?Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ @ 0x1801208D0 (-Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAKXZ @ 0x180120F90 (-Release@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CConversionSwapChain::Release(CConversionSwapChain *this)
{
  return CMILCOMBaseWeakRef::InternalRelease(this);
}

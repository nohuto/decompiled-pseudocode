/*
 * XREFs of ?Release@CConversionSwapChain@@UEAAKXZ @ 0x180103710
 * Callers:
 *     ?Release@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011ED00 (-Release@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ @ 0x18011FB60 (-Release@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAKXZ.c)
 *     ?Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ @ 0x180120C00 (-Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAKXZ @ 0x1801212C0 (-Release@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CConversionSwapChain::Release(CConversionSwapChain *this)
{
  return CMILCOMBaseWeakRef::InternalRelease(this);
}

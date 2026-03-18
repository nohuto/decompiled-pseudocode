/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FA740
 * Callers:
 *     ?QueryInterface@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E9B0 (-QueryInterface@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011F810 (-QueryInterface@CLegacySwapChain@@$4PPPPPPPM@BGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801208B0 (-QueryInterface@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180120F70 (-QueryInterface@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChain::QueryInterface(CLegacySwapChain *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseWeakRef::InternalQueryInterface(this, a2, a3);
}

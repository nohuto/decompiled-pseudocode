/*
 * XREFs of ?GetDisplayAdapterLuid@COverlaySwapChainBase@@UEBA?AU_LUID@@XZ @ 0x1801069C0
 * Callers:
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA?AU_LUID@@XZ @ 0x18011F570 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA?AU_LUID@@XZ @ 0x1801205F0 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA?AU_LUID@@XZ @ 0x180120CB0 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COverlaySwapChainBase::GetDisplayAdapterLuid(COverlaySwapChainBase *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 116);
  return (struct _LUID)a2;
}

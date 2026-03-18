/*
 * XREFs of ?GetAdapterLuid@CLegacySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800FC2BC
 * Callers:
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180108DD0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x180109DD0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x18010A410 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(CLegacySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 26);
  return (struct _LUID)a2;
}

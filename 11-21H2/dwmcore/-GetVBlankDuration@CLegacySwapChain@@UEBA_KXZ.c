/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@UEBA_KXZ @ 0x1800FAE70
 * Callers:
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EBA_KXZ @ 0x180108F70 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EBA_KXZ.c)
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_KXZ @ 0x180109F70 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_KXZ.c)
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_KXZ @ 0x18010A590 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(CLegacySwapChain *this)
{
  return *((_QWORD *)this - 22);
}

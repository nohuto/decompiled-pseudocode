/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@UEBA_NXZ @ 0x1801083E0
 * Callers:
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011F730 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x1801207B0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x180120E70 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(CLegacySwapChain *this)
{
  return *((_BYTE *)this - 300);
}

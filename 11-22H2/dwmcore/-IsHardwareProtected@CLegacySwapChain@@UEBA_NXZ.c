/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@UEBA_NXZ @ 0x1801084E0
 * Callers:
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011FA60 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x180120AE0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1801211A0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(CLegacySwapChain *this)
{
  return *((_BYTE *)this - 300);
}

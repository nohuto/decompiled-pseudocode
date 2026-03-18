/*
 * XREFs of ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x1800FB920
 * Callers:
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011F6B0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x180120730 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x180120DF0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  (*(void (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 256LL))(this);
  return *((unsigned int *)this + 31);
}

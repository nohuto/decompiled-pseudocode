/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1800DC390
 * Callers:
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x18011F770 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@7EBAJXZ @ 0x180120810 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@7EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x180120ED0 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::IsValid(CLegacySwapChain *this)
{
  if ( *((_QWORD *)this - 23) )
    return *(unsigned int *)(*((_QWORD *)this - 41) + 1088LL);
  else
    return 2291662989LL;
}

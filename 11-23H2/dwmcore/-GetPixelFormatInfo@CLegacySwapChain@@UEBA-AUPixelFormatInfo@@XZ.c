/*
 * XREFs of ?GetPixelFormatInfo@CLegacySwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801083B0
 * Callers:
 *     ?GetPixelFormatInfo@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011F5B0 (-GetPixelFormatInfo@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CLegacySwapChain@@$4PPPPPPPM@7EBA?AUPixelFormatInfo@@XZ @ 0x180120630 (-GetPixelFormatInfo@CLegacySwapChain@@$4PPPPPPPM@7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 100);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 108);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}

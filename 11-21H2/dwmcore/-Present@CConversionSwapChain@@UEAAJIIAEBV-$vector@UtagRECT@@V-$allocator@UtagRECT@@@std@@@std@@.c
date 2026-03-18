/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180292ECC
 * Callers:
 *     ?Present@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18010A6F0 (-Present@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 * Callees:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18001BE80 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x1802920CC (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::Present(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  char v9; // si
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi

  if ( (a3 & 2) != 0 )
  {
    v9 = 1;
  }
  else
  {
    *(_DWORD *)(a1 - 460) = 0;
    v9 = 0;
    CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)(a1 - 824));
  }
  v10 = CLegacySwapChain::Present(a1 - 424, a2, a3, a4, a5);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x11Bu);
  if ( !v9 )
    **(_DWORD **)(a1 - 184) = 0;
  return v12;
}

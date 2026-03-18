/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802915C4
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18010A370 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANE.c)
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800DB680 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x180292CE0 (-IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180292D48 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall CConversionSwapChain::CheckMultiplaneOverlaySupport(
        CConversionSwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  char v4; // bl
  bool v7; // zf
  _DWORD *v8; // rcx
  char *i; // rdi
  int v10; // r8d

  v4 = 0;
  *a4 = 0;
  if ( a3 == 1 )
  {
    if ( !CConversionSwapChain::IsDesktopRect(
            (CConversionSwapChain *)((char *)this - 824),
            (const struct tagRECT *)((char *)a2 + 52))
      || !operator==((_DWORD *)a2 + 9, (_DWORD *)a2 + 13)
      || !operator==(v8, (_DWORD *)a2 + 17) )
    {
      return v4;
    }
    v7 = *((_DWORD *)a2 + 21) == 1;
  }
  else
  {
    if ( a3 != 2
      || *(_DWORD *)a2
      || *((_DWORD *)a2 + 5) != g_luidZero.LowPart
      || *((_DWORD *)a2 + 6) != g_luidZero.HighPart
      || !CConversionSwapChain::IsDesktopRect(
            (CConversionSwapChain *)((char *)this - 824),
            (const struct tagRECT *)((char *)a2 + 52))
      || !operator==((_DWORD *)a2 + 9, (_DWORD *)a2 + 13)
      || *((_DWORD *)a2 + 21) != 1 )
    {
      return v4;
    }
    v7 = *((_DWORD *)a2 + 22) == 1;
  }
  if ( v7 )
  {
    for ( i = (char *)a2 + 108;
          !*((_DWORD *)i - 19)
       && CConversionSwapChain::IsSupportedFakeOverlayColorSpace(*(enum DXGI_COLOR_SPACE_TYPE *)i)
       && !*((_DWORD *)i + 1);
          i += 144 )
    {
      if ( v10 + 1 >= a3 )
        return 1;
    }
  }
  return v4;
}

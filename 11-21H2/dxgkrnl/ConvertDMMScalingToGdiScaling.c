/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C01BE2E0
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C01BD268 (_BmlGetPathModalityForAdapter.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C01BE1E4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E76A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C02F8DC4 (_PopulateDisplayModeFromPresentPath.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(int a1, _DWORD *a2)
{
  unsigned int v3; // ebp

  v3 = 1;
  switch ( a1 )
  {
    case 1:
      goto LABEL_6;
    case 2:
      *a2 = 2;
      return v3;
    case 3:
      *a2 = 1;
      return v3;
  }
  if ( a1 > 3 && (a1 <= 5 || a1 == 255) )
  {
LABEL_6:
    *a2 = 0;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    if ( a1 == 253 )
    {
      WdLogSingleEntry1(1LL, 158LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
        158LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *a2 = 0;
    return 0;
  }
  return v3;
}

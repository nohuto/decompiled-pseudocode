/*
 * XREFs of ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0010AC8
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C018A274 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C018A2D0 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  int v3; // eax
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al
  char v6; // cl
  int v7; // ecx
  unsigned __int8 IsDriverCustomScalingSupported; // al

  switch ( a2 )
  {
    case D3DKMDT_VPPS_IDENTITY:
      LOBYTE(v3) = *((_BYTE *)this + 120);
      return v3 & 1;
    case D3DKMDT_VPPS_CENTERED:
      v3 = *((_DWORD *)this + 30) >> 1;
      return v3 & 1;
    case D3DKMDT_VPPS_STRETCHED:
      v3 = *((_DWORD *)this + 30) >> 2;
      return v3 & 1;
    case D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX:
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v6 = 0;
      if ( !IsDriverAspectRatioCenteredMaxSupported )
        return v6;
      v7 = *((_DWORD *)this + 30) >> 3;
      return v7 & 1;
    case D3DKMDT_VPPS_CUSTOM:
      IsDriverCustomScalingSupported = DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this);
      v6 = 0;
      if ( !IsDriverCustomScalingSupported )
        return v6;
      v7 = *((_DWORD *)this + 30) >> 4;
      return v7 & 1;
    case D3DKMDT_VPPS_NOTSPECIFIED:
      return 1;
  }
  WdLogSingleEntry1(2LL, a2);
  return 0;
}

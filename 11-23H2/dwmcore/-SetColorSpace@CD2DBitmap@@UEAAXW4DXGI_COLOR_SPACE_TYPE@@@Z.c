/*
 * XREFs of ?SetColorSpace@CD2DBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180108560
 * Callers:
 *     ?SetColorSpace@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180120310 (-SetColorSpace@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::SetColorSpace(CD2DBitmap *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  *((_DWORD *)this + 38) = a2;
}

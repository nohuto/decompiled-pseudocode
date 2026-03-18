/*
 * XREFs of ?IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801085EC
 * Callers:
 *     ?IsDisplayTarget@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801201D0 (-IsDisplayTarget@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsDisplayTarget(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this - 127);
}

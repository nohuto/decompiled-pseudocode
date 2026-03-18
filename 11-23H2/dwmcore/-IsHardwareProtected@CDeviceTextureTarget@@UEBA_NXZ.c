/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1800D8C90
 * Callers:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ @ 0x1801201F0 (-IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 184) || (*((_DWORD *)this + 24) & 0x80000) != 0;
}

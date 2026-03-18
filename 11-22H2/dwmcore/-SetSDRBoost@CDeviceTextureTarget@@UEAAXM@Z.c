/*
 * XREFs of ?SetSDRBoost@CDeviceTextureTarget@@UEAAXM@Z @ 0x1801086F8
 * Callers:
 *     ?SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z @ 0x180120680 (-SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetSDRBoost(CDeviceTextureTarget *this, float a2)
{
  *((float *)this - 33) = a2;
}

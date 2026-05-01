/*
 * XREFs of ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x18052C114
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x18052BC4C (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x18052BE1C (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

bool CImmersiveColor::IsLightTheme(void)
{
  __int64 Color; // rax

  Color = CImmersiveColor::GetColor(0xD7u);
  return (_WORD)Color == 0xFFFF && BYTE2(Color) == 0xFF;
}

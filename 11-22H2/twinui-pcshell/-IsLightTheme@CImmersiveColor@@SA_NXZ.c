/*
 * XREFs of ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x1802E702E
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x1805E6B90 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1805E6D60 (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

bool CImmersiveColor::IsLightTheme(void)
{
  __int64 Color; // rax

  Color = CImmersiveColor::GetColor(215LL);
  return (_WORD)Color == 0xFFFF && BYTE2(Color) == 0xFF;
}

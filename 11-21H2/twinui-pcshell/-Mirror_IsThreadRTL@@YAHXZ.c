/*
 * XREFs of ?Mirror_IsThreadRTL@@YAHXZ @ 0x180070D14
 * Callers:
 *     _dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__ @ 0x180002780 (_dynamic_initializer_for__PPIWin32VtcLayoutOperation--_sideBarLocation__.c)
 *     ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1801A6160 (-IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 Mirror_IsThreadRTL(void)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return IsBiDiLocale(ThreadUILanguage);
}

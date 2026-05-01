/*
 * XREFs of ?Mirror_IsThreadRTL@@YAHXZ @ 0x180186D48
 * Callers:
 *     _dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__ @ 0x1800030B0 (_dynamic_initializer_for__PPIWin32VtcLayoutOperation--_sideBarLocation__.c)
 * Callees:
 *     <none>
 */

__int64 Mirror_IsThreadRTL(void)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return IsBiDiLocale(ThreadUILanguage);
}

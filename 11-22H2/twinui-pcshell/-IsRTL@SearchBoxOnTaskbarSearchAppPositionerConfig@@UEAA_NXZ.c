/*
 * XREFs of ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x180186D70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsRTL(SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
}

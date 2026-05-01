/*
 * XREFs of ?IsRTL@MiniSearchAppPositionerConfig@@UEAA_NXZ @ 0x1803AEDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 */

bool __fastcall MiniSearchAppPositionerConfig::IsRTL(MiniSearchAppPositionerConfig *this)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
}

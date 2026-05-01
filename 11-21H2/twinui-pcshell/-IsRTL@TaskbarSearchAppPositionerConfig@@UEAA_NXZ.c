/*
 * XREFs of ?IsRTL@TaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x180073960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 */

bool __fastcall TaskbarSearchAppPositionerConfig::IsRTL(TaskbarSearchAppPositionerConfig *this)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
}

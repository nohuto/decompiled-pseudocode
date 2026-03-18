/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140371B94
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140371A5C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038D264 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}

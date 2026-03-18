/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14038D264
 * Callers:
 *     LdrpGetParentLangId @ 0x1403C7798 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x140759C40 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1408257A0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1409BA2C0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140371B94 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403D9E00 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140002A30, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_1400037D0)[2 * word_140020570[(v3 - (_BYTE *)&off_140002A30) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}

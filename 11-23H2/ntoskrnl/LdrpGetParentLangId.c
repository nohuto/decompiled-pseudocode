/*
 * XREFs of LdrpGetParentLangId @ 0x1403C7798
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x140755D10 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x14075A554 (LdrResFallbackLangList.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140371A5C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038D264 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x1406145F0 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int16 a1, _WORD *a2)
{
  __int16 v2; // bx
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v6[176]; // [rsp+D0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v5, 85, 2) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v5, v6) >= 2 )
    v2 = DownLevelLanguageNameToLangID(v6, 2);
  *a2 = v2;
  return 0LL;
}

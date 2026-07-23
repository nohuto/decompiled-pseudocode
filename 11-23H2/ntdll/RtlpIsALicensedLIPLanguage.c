/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x18000C670
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001032C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegAddLanguageByName @ 0x180112444 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x1800102C0 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t *v5; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(wchar_t **)(a1 + 136);
  if ( v4 && (unsigned __int8)RtlpLangNameInMultiSzString(v4, a2) )
    return 3221225524LL;
  v5 = *(wchar_t **)(a1 + 152);
  result = 0LL;
  if ( v5 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) != 0 ? 0xC0000034 : 0;
  return result;
}

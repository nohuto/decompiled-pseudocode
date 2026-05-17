/*
 * XREFs of _RtlpMuiRegInitPartialLanguage @ 0x1801137DC
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x180110B44 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 */

__int64 __fastcall RtlpMuiRegInitPartialLanguage(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return 3221225485LL;
  if ( (int)RtlpMuiRegPopulateBaseLanguages(a1) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  *(_WORD *)a3 |= 0x1000u;
  return 0LL;
}

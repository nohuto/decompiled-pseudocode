/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x180110FC4
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113D84 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x18000C874 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180010694 (RtlpIsALicensedRegularLanguage.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180110E0C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180111FC0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180113934 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180113A00 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x180113C48 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // al
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = RtlpMuiRegInitAnyLanguage(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, v11);
LABEL_6:
    if ( (int)result < 0 )
      return result;
    v10 = v11[0];
    goto LABEL_8;
  }
  if ( (v11[0] & 2) != 0 )
  {
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
    goto LABEL_6;
  }
LABEL_8:
  if ( (v10 & 4) != 0 )
    result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
  else
    result = RtlpIsALicensedRegularLanguage(a1, a3);
  if ( (int)result >= 0 )
  {
    v11[0] |= 0x820u;
    RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
    return RtlpMuiRegGetOrAddLangInfo(a1 + 3, v11, a6);
  }
  return result;
}

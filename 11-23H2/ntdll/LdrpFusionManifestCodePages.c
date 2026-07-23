/*
 * XREFs of LdrpFusionManifestCodePages @ 0x1800AF938
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DDB38 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D8E0 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     wcscmp @ 0x1800951A0 (wcscmp.c)
 *     MayBeLocaleName @ 0x1800E0974 (MayBeLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18010B070 (RtlpGetProcessCodepagesForLocale.c)
 */

bool __fastcall LdrpFusionManifestCodePages(_DWORD *a1, _DWORD *a2)
{
  bool v4; // zf
  wchar_t String1[16]; // [rsp+40h] [rbp-38h] BYREF

  *a1 = 0;
  *a2 = 0;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0LL,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2019/WindowsSettings",
         (PWSTR)L"activeCodePage",
         String1,
         0xFuLL,
         0LL) < 0 )
    goto LABEL_10;
  if ( !wcscmp(String1, L"UTF-8") )
  {
LABEL_9:
    *a1 = 65001;
    *a2 = 65001;
    goto LABEL_10;
  }
  if ( wcscmp(String1, L"Legacy") )
  {
    if ( !(unsigned __int8)MayBeLocaleName(String1) || (int)RtlpGetProcessCodepagesForLocale(String1, a1, a2) >= 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  RtlpGetProcessCodepagesForLocale(0LL, a1, a2);
  if ( *a1 == 65001 || (v4 = *a1 == 0, !*a1) )
  {
    *a1 = 1252;
    *a2 = 437;
LABEL_10:
    v4 = *a1 == 0;
  }
  return !v4;
}

/*
 * XREFs of ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1802F5F10
 * Callers:
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1802F4A2C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

char __fastcall LoggingUtil::AppIdCensorUtility::ExtractDomain(LPCWSTR lpszUrl, char **a2)
{
  char v4; // bl
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-2B8h]
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+30h] [rbp-2A8h] BYREF
  WCHAR v12[264]; // [rsp+A0h] [rbp-238h] BYREF

  *a2 = 0LL;
  v4 = 0;
  if ( lpszUrl )
  {
    memset_0(&UrlComponents, 0, sizeof(UrlComponents));
    UrlComponents.dwStructSize = 104;
    memset_0(v12, 0, 0x202uLL);
    UrlComponents.dwHostNameLength = 257;
    v5 = -1LL;
    UrlComponents.lpszHostName = v12;
    v6 = -1LL;
    do
      ++v6;
    while ( lpszUrl[v6] );
    if ( InternetCrackUrlW(lpszUrl, v6, 0, &UrlComponents) || ResultFromKnownLastError() >= 0 )
    {
      v4 = 1;
      do
        ++v5;
      while ( v12[v5] );
      _AllocStringWorker<CTCoAllocPolicy>(v8, v7, v12, v5, v10, a2);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}

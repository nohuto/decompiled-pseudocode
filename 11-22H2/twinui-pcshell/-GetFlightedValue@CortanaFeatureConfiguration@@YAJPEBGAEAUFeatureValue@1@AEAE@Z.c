/*
 * XREFs of ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180444A38
 * Callers:
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180444990 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFlightedValue(
        CortanaFeatureConfiguration *this,
        const unsigned __int16 *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // edi
  HRESULT String; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  LPDWORD pdwType; // [rsp+20h] [rbp-E0h]
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v16; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SubKey[2048]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1298h] [rbp+1198h]

  pcbData = 4;
  *(_BYTE *)a3 = 0;
  pvData = 0;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting",
         L"Current",
         0x10u,
         0LL,
         &pvData,
         &pcbData) )
  {
    return 0LL;
  }
  LODWORD(pdwType) = pvData;
  v7 = StringCchPrintfW(
         SubKey,
         0x800uLL,
         (size_t *)L"%s\\%d\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting",
         pdwType,
         this);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)(unsigned int)v7);
    return v8;
  }
  if ( *(_DWORD *)a2 < 2u )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 0x10u, 0LL, &pvData, &pcbData) )
    {
      *((_DWORD *)a2 + 1) = pvData;
LABEL_15:
      *(_BYTE *)a3 = 1;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      String = -2147024809;
      v11 = 358LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
        (const char *)(unsigned int)String);
      return (unsigned int)String;
    }
    memset_0(sourceString, 0, 0x208uLL);
    v16 = 520;
    if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 2u, 0LL, sourceString, &v16) )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( sourceString[v12] );
      String = WindowsCreateString(sourceString, v12, (HSTRING *)a2 + 1);
      if ( String < 0 )
      {
        v11 = 351LL;
        goto LABEL_12;
      }
      goto LABEL_15;
    }
  }
  return 0LL;
}

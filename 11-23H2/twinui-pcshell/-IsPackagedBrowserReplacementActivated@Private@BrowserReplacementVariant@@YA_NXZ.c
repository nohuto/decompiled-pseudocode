/*
 * XREFs of ?IsPackagedBrowserReplacementActivated@Private@BrowserReplacementVariant@@YA_NXZ @ 0x18075865C
 * Callers:
 *     ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180758730 (-IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$init_once_nothrow@V_lambda_7d151714ca0074b33c977dd82f5c8610_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_7d151714ca0074b33c977dd82f5c8610_@@PEA_N@Z @ 0x18075149C (--$init_once_nothrow@V_lambda_7d151714ca0074b33c977dd82f5c8610_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 */

bool __fastcall BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated(
        BrowserReplacementVariant::Private *this)
{
  bool v1; // bl
  HKEY hkey; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( (int)wil::init_once_nothrow<_lambda_7d151714ca0074b33c977dd82f5c8610_>() < 0
    || !`BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated'::`2'::s_isOneCore )
  {
    return 0;
  }
  hkey = 0LL;
  if ( !RegOpenKeyExW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MicrosoftEdge",
          0,
          0x20019u,
          &hkey) )
  {
    v1 = RegGetValueW(hkey, 0LL, L"PackagedReplacementEnabled", 0xFFFFu, 0LL, 0LL, 0LL) == 0;
    RegCloseKey(hkey);
  }
  return v1;
}

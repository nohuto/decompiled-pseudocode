/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BECF0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A1464 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140791078 (PnpGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DBE84 (PnpGetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140844C40 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140844F78 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDevicePropertyData @ 0x1408666A8 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086D8A8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140957850 (PnpGetDeviceInstancePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A74644 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A74DD8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A75948 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140A75D80 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14032A6F0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140371A5C (DownLevelLangIDToLanguageName.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, &word_140D18F80, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, &word_140D18F80);
          return 1;
        }
      }
    }
  }
  return v2;
}

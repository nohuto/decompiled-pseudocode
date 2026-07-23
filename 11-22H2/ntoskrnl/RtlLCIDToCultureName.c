/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BEDA0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A1174 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140791588 (PnpGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DC404 (PnpGetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408469D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140846D08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDevicePropertyData @ 0x140866B78 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DD78 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140957900 (PnpGetDeviceInstancePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A746B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A74E48 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A759B8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140A75DF0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140D19040, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140D19040);
          return 1;
        }
      }
    }
  }
  return v2;
}

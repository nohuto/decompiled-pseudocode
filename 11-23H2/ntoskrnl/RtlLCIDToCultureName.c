/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BEEF0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A1644 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140791268 (PnpGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DC154 (PnpGetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140844F40 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140845278 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDevicePropertyData @ 0x1408668E8 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DAE8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140957A50 (PnpGetDeviceInstancePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A748F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A75088 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A75BF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140A76030 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140371BFC (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, &word_140D18F80, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, &word_140D18F80);
          return 1;
        }
      }
    }
  }
  return v2;
}

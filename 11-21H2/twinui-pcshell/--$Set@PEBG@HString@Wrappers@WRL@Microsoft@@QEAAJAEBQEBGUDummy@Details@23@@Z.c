/*
 * XREFs of ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18000B090 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18011E200 (-LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x18013B7B0 (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x18013B880 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KP.c)
 *     ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x1803CB2E0 (--$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ??0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z @ 0x1805624FC (--0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1805E3ECC (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx

  v2 = *a2;
  if ( !*a2 )
    return Microsoft::WRL::Wrappers::HString::Set((Microsoft::WRL::Wrappers::HString *)string, &LocaleName, 0);
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  if ( v4 > 0xFFFFFFFF )
    return -2147024362;
  WindowsDeleteString(*string);
  *string = 0LL;
  return WindowsCreateString(v2, v4, string);
}

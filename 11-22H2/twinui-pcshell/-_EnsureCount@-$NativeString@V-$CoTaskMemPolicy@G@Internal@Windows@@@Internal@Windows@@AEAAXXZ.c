/*
 * XREFs of ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938
 * Callers:
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18005DB40 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x180061324 (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 *     ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180065790 (-UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800C5760 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802D0A2E (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1802EA428 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803EB760 (-GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803EB7E0 (-GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803EB850 (-GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803EB8D0 (-GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180441980 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180497710 (-GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804977A0 (-GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x180730C90 (-OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x180744E98 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     s_DrawThemeTextPPIAware @ 0x18074C5CC (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x18074CC00 (s_OnMeasureItem.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1807543C0 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(
        _QWORD *a1)
{
  __int64 result; // rax

  result = -1LL;
  if ( a1[1] == -1LL )
  {
    if ( *a1 )
    {
      do
        ++result;
      while ( *(_WORD *)(*a1 + 2 * result) );
    }
    else
    {
      result = 0LL;
    }
    a1[1] = result;
  }
  return result;
}

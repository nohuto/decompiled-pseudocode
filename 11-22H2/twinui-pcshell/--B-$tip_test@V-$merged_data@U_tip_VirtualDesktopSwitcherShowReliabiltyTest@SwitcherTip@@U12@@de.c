/*
 * XREFs of ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800381A0 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180038808 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180091D0C (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800B9B4C (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180174554 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046984C (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1804699F4 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18077509C (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004048C (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

char __fastcall tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool(
        __int64 *a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *a1;
  result = 0;
  if ( v1 )
    return tip2::details::shared_data<0,0,0>::is_running(v1 + 8);
  return result;
}

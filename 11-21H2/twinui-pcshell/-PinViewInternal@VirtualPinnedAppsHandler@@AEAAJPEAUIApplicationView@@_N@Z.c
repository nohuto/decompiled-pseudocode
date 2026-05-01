/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805578D4
 * Callers:
 *     ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE2D0 (-SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 *     ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180156FA0 (-ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180157080 (-ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180557190 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180557620 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180557930 (-PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180557A90 (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        bool a3)
{
  int v3; // eax
  __int64 v4; // r9
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(this, a2, a3);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u,
      v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}

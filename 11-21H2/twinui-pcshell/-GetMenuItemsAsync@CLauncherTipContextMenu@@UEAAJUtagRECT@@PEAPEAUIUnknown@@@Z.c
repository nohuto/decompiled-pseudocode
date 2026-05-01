/*
 * XREFs of ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1805D9100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x1801D9B74 (-GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA-AU-$IAsyncOperation@U-$IVectorView@UMenuI.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsync(
        CLauncherTipContextMenu *this,
        struct tagRECT *a2,
        struct IUnknown **a3,
        __int64 a4)
{
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v9 = (__int128)*a2;
    CLauncherTipContextMenu::GetMenuItemsAsyncHelper(
      (__int64)this - 88,
      (winrt::Windows::Foundation::IUnknown *)&v11,
      &v9);
    *a3 = v11;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7C8,
                           (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
                           v7);
  }
  return result;
}

/*
 * XREFs of ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x180087480
 * Callers:
 *     winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_9ec3d353ebe123d5bcc6e0dd9d042727___ @ 0x18020DB3C (winrt--make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService_.c)
 * Callees:
 *     ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800872FC (--0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService.c)
 *     ?_Reset_move@?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1800875C4 (-_Reset_move@-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  v8 = 0LL;
  std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::_Reset_move(v7, a3);
  VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy(
    (__int64)a1,
    a2,
    (__int64)v7);
  *a1 = &winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  a1[1] = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(a3);
  return a1;
}

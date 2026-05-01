/*
 * XREFs of ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x180087408
 * Callers:
 *     winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_568cc8b99e08703b6f8e9ab35c61ba24___ @ 0x18020DA88 (winrt--make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_568.c)
 * Callees:
 *     ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800871F0 (--0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V-$function.c)
 *     ?_Reset_move@?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1800875C4 (-_Reset_move@-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::heap_implements<TaskViewViewChangeNotificationProxy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  v8 = 0LL;
  std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::_Reset_move(v7, a3);
  TaskViewViewChangeNotificationProxy::TaskViewViewChangeNotificationProxy((__int64)a1, a2, (__int64)v7);
  *a1 = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<TaskViewViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  a1[1] = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(a3);
  return a1;
}

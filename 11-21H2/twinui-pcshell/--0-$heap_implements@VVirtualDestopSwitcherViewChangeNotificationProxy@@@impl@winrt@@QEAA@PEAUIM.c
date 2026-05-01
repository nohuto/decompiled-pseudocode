/*
 * XREFs of ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E414
 * Callers:
 *     winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_f5bad7708cd3d32b6b139f2523e4a8ac___ @ 0x18010E5A4 (winrt--make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService_.c)
 * Callees:
 *     ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E164 (--0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010E48C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  v8 = 0LL;
  std::_Func_class<void,>::_Reset_move(v7, a3);
  VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy(
    (__int64)a1,
    a2,
    (__int64)v7);
  *a1 = &winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  a1[1] = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  std::_Func_class<void,>::_Tidy(a3);
  return a1;
}

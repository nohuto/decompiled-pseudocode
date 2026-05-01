/*
 * XREFs of ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E52C
 * Callers:
 *     winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4fcc601e1ca868e387495d7c277bf315___ @ 0x18010E6AC (winrt--make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4fc.c)
 * Callees:
 *     ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E31C (--0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V-$function.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010E48C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::heap_implements<TaskViewViewChangeNotificationProxy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  _BYTE v8[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]

  v9 = 0LL;
  std::_Func_class<void,>::_Reset_move((__int64)v8, a3);
  TaskViewViewChangeNotificationProxy::TaskViewViewChangeNotificationProxy((__int64)a1, a2, (__int64)v8);
  *a1 = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<TaskViewViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  a1[1] = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  std::_Func_class<void,>::_Tidy(a3, v6);
  return a1;
}

/*
 * XREFs of ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E31C
 * Callers:
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E52C (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@SmartCookie@@QEAAJPEAUIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@Z @ 0x18010C418 (--$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotifica.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x18010E25C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskViewViewChangeNotificationProxy::TaskViewViewChangeNotificationProxy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v6; // rsi
  __int64 v7; // r8
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)a1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<TaskViewViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  *(_QWORD *)(a1 + 8) = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  v6 = (__int64 *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  if ( *(_QWORD *)(a1 + 24) != a2 )
  {
    if ( *v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
    *v6 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  std::function<void (void)>::operator=(a1 + 160, a3);
  v8 = SmartCookie::Register<IMultitaskingViewVisibilityService,long (IMultitaskingViewVisibilityService::*)(IMultitaskingViewVisibilityNotification *,unsigned long *),long (IMultitaskingViewVisibilityService::*)(unsigned long),TaskViewViewChangeNotificationProxy *>(
         a1 + 32,
         *v6,
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v8,
      a1);
  std::_Func_class<void,>::_Tidy(a3);
  return a1;
}

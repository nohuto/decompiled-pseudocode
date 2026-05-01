/*
 * XREFs of ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800872FC
 * Callers:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x180087480 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDestopSwitcherViewChangeNotificationProxy@@@SmartCookie@@QEAAJPEAUIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDestopSwitcherViewChangeNotificationProxy@@@Z @ 0x180085C38 (--$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisib_ea_180085C38.c)
 *     ??4?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800874F8 (--4-$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy(
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
  *(_QWORD *)a1 = &winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
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
  std::function<void (enum winrt::WindowsUdk::UI::Shell::ViewVisibility)>::operator=(a1 + 160, a3);
  v8 = SmartCookie::Register<IMultitaskingViewVisibilityService,long (IMultitaskingViewVisibilityService::*)(IMultitaskingViewVisibilityNotification *,unsigned long *),long (IMultitaskingViewVisibilityService::*)(unsigned long),VirtualDestopSwitcherViewChangeNotificationProxy *>(
         a1 + 32,
         *v6,
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x88,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v8,
      a1);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(a3);
  return a1;
}

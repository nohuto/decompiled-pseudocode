/*
 * XREFs of ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18055C050
 * Callers:
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x18055AEEC (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18055B848 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F4980 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@2@XZ @ 0x18055BF44 (-get@-$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA-.c)
 */

void __fastcall winrt::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::revoke(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v2 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  v5 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)a1, &v3);
  winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::get(&v5, &v4);
  if ( v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(v4, *(_QWORD *)(a1 + 16));
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
}

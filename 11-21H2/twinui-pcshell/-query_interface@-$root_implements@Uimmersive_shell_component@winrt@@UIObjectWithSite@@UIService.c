/*
 * XREFs of ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F9710
 * Callers:
 *     ?QueryInterface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F83A0 (-QueryInterface@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8540 (-QueryInterface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8560 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 *     ?QueryInterface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8610 (-QueryInterface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8620 (-QueryInterface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@win.c)
 *     ?QueryInterface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F92C0 (-QueryInterface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 *     ?QueryInterface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F9700 (-QueryInterface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B5B40 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UI_ea_1803B5B40.c)
 * Callees:
 *     ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x180054D18 (-get_marshaler@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F9E24 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  signed __int64 v17; // rtt
  signed __int64 v18; // rtt
  __int64 v19; // rdi
  unsigned int v20; // ebp
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 weak_ref; // rax
  unsigned int v24; // ecx
  signed __int64 v25; // rtt

  v5 = a1 == 0LL;
  v6 = 32LL;
  if ( !v5 )
    v6 = (__int64)a1;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  *a3 = v8;
  if ( v8 )
  {
    v15 = *((_QWORD *)a1 + 1);
    while ( v15 >= 0 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64(a1 + 1, v15 + 1, v15);
      if ( v16 == v15 )
        return 0LL;
    }
  }
  else
  {
    v9 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v9 = a2[1] + 0x6FA470359B110040LL;
    if ( v9 )
    {
      v10 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v10 = a2[1] - 0x46000000000000C0LL;
      if ( !v10 )
      {
        v19 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        v20 = 0;
        v21 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v21 )
        {
          *v21 = `winrt::impl::make_marshaler'::`2'::marshaler::`vftable';
          v21[1] = 0LL;
          `winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(v21 + 2);
          *((_DWORD *)v21 + 6) = 1;
          v22 = v21[1];
          if ( v22 != v19 )
          {
            if ( v22 )
              winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v21 + 1);
            v21[1] = v19;
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          }
          *a3 = (__int64)v21;
        }
        else
        {
          *a3 = 0LL;
          return (unsigned int)-2147024882;
        }
        return v20;
      }
      v11 = *a2 - winrt::impl::guid_v<IInspectable>;
      if ( *a2 == winrt::impl::guid_v<IInspectable> )
        v11 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v11 )
      {
        v12 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
        if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
          v12 = a2[1] - 0x46000000000000C0LL;
        if ( v12 )
        {
          v13 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
          if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
            v13 = a2[1] - 0x46000000000000C0LL;
          if ( v13 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
          weak_ref = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::make_weak_ref(a1);
          *a3 = weak_ref;
          v24 = -2147024882;
          if ( weak_ref )
            return 0;
          return v24;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        v15 = *((_QWORD *)a1 + 1);
        while ( v15 >= 0 )
        {
          v18 = v15;
          v15 = _InterlockedCompareExchange64(a1 + 1, v15 + 1, v15);
          if ( v18 == v15 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
        v15 = *((_QWORD *)a1 + 1);
        while ( v15 >= 0 )
        {
          v25 = v15;
          v15 = _InterlockedCompareExchange64(a1 + 1, v15 + 1, v15);
          if ( v25 == v15 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v15 = *((_QWORD *)a1 + 1);
      while ( v15 >= 0 )
      {
        v17 = v15;
        v15 = _InterlockedCompareExchange64(a1 + 1, v15 + 1, v15);
        if ( v17 == v15 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v15 + 24), 1u);
  return 0LL;
}

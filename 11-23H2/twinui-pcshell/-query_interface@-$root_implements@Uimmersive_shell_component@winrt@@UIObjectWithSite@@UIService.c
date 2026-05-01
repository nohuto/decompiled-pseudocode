/*
 * XREFs of ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D8750
 * Callers:
 *     ?QueryInterface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D68B0 (-QueryInterface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@win.c)
 *     ?QueryInterface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6C70 (-QueryInterface@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6D70 (-QueryInterface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?QueryInterface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6E90 (-QueryInterface@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiv.c)
 *     ?QueryInterface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D7BB0 (-QueryInterface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 *     ?QueryInterface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8740 (-QueryInterface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D91F0 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9590 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8 (-make_weak_ref@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 result; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  signed __int64 v17; // rtt
  signed __int64 v18; // rtt
  __int64 v19; // rax
  void *weak_ref; // rax
  signed __int64 v21; // rtt

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
        return winrt::impl::make_marshaler(v19, a3);
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
          weak_ref = winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref(a1);
          *a3 = (__int64)weak_ref;
          v5 = weak_ref == 0LL;
          result = 2147942414LL;
          if ( !v5 )
            return 0LL;
          return result;
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
          v21 = v15;
          v15 = _InterlockedCompareExchange64(a1 + 1, v15 + 1, v15);
          if ( v21 == v15 )
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

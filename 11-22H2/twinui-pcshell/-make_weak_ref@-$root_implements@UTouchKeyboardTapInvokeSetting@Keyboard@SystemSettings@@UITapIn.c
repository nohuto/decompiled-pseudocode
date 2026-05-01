/*
 * XREFs of ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8
 * Callers:
 *     ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x1800A4A18 (-SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 *     ?query_interface@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D7108 (-query_interface@-$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@wi.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D8750 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 *     ??$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DC048 (--$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@-$root_implements@.c)
 *     ??$get_weak@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801844B8 (--$get_weak@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@-$root_implements@Ui.c)
 *     ?query_interface@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180195F78 (-query_interface@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITap.c)
 *     ??$get_weak@UPinManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18069CB64 (--$get_weak@UPinManager@implementation@Shell@Internal@Windows@winrt@@@-$root_implements@Uimmersi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void *__fastcall winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx
  void *result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 >= 0 )
  {
    result = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (unsigned __int64)result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v11 = v4;
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      v6 = (v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, v6, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
        {
          v9 = v11;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 24), 1u);
          return (void *)(v9 + 8);
        }
        if ( v8 < 0 )
          break;
        _InterlockedExchange((volatile __int32 *)(v11 + 24), v8);
      }
      v10 = 2 * v8 + 8;
      winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(
        &v11,
        (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u));
      return (void *)v10;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return (void *)(2 * v1 + 8);
  }
  return result;
}

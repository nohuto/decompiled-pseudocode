/*
 * XREFs of ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18006D250
 * Callers:
 *     ?MultitaskingViewShown@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18006D1F0 (-MultitaskingViewShown@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?MultitaskingViewDismissed@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18006D220 (-MultitaskingViewDismissed@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@.c)
 *     ?MultitaskingViewShown@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180072940 (-MultitaskingViewShown@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIE.c)
 *     ?MultitaskingViewDismissed@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180072970 (-MultitaskingViewDismissed@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(
        __int64 a1,
        int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x180343CCDLL);
  }
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}

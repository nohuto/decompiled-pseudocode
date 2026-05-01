/*
 * XREFs of ?MultitaskingViewShown@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180072940
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18006D250 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 */

__int64 __fastcall VirtualDestopSwitcherViewChangeNotificationProxy::MultitaskingViewShown(__int64 a1, char a2)
{
  if ( (a2 & 0x10) != 0 )
    std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(a1 + 160, 0);
  return 0LL;
}

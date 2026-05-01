/*
 * XREFs of ?MultitaskingViewShown@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18003E850
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18003E8B0 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 */

__int64 __fastcall TaskViewViewChangeNotificationProxy::MultitaskingViewShown(
        __int64 a1,
        char a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( (a2 & 2) != 0 )
      std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(a1 + 160, 0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x61,
                           (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                           a4);
  }
  return result;
}

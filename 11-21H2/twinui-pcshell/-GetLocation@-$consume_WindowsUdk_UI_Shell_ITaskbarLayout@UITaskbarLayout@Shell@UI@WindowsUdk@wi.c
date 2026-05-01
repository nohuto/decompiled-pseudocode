/*
 * XREFs of ?GetLocation@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@W4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@3@_K@Z @ 0x1805CC930
 * Callers:
 *     ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1801D0F48 (-CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetLocation(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}

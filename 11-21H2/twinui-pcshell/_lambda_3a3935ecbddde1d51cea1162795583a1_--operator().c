/*
 * XREFs of _lambda_3a3935ecbddde1d51cea1162795583a1_::operator() @ 0x18019C1CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3a3935ecbddde1d51cea1162795583a1___::Run @ 0x1801A0AB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3a3935ecbddde1d51cea1162795583a1___--Run.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x18017DD6C (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_18017DD6C.c)
 */

char __fastcall lambda_3a3935ecbddde1d51cea1162795583a1_::operator()(__int64 a1)
{
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v3);
  if ( !result )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
               (_QWORD *)a1,
               (_QWORD *)(a1 + 8));
  }
  return result;
}

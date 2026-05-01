/*
 * XREFs of _lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::operator() @ 0x18019C7CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___::Run @ 0x1801A0B50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___--Run.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x18017DD6C (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_18017DD6C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::operator()(_QWORD *a1)
{
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v3);
  if ( !result )
  {
    if ( a1[1] )
      result = winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
                 a1,
                 a1 + 1);
    if ( a1[2] )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  }
  return result;
}

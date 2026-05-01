/*
 * XREFs of ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644B04
 * Callers:
 *     _lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator() @ 0x180642824 (_lambda_7936b82dc4b721215efe4b8ef74a7a70_--operator().c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x1806429B8 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

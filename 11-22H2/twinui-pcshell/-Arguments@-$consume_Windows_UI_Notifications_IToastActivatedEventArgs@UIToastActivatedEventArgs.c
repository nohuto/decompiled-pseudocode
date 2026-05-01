/*
 * XREFs of ?Arguments@?$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806ABA48
 * Callers:
 *     _lambda_d81cebd908bc953c0c32f92e43af8435_::operator() @ 0x1806AB768 (_lambda_d81cebd908bc953c0c32f92e43af8435_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  result = a2;
  *a2 = v6;
  return result;
}

/*
 * XREFs of ?History@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180644768
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_c0fabf41be1276bce350d62b8e95619d_@@CA@AEBUIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@Z @ 0x1806411C0 (-_lambda_invoker_cdecl_@_lambda_c0fabf41be1276bce350d62b8e95619d_@@CA@AEBUIToastNotificationMana.c)
 *     _lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator() @ 0x180642824 (_lambda_7936b82dc4b721215efe4b8ef74a7a70_--operator().c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x1806429B8 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::History(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}

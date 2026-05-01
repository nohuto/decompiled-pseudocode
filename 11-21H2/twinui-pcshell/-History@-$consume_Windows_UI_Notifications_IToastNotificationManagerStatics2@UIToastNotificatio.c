/*
 * XREFs of ?History@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotificationHistory@Notifications@UI@Windows@3@XZ @ 0x1805869E8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_c0fabf41be1276bce350d62b8e95619d_@@CA?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@3456@@Z @ 0x180582940 (-_lambda_invoker_cdecl_@_lambda_c0fabf41be1276bce350d62b8e95619d_@@CA-AUToastNotificationHistory.c)
 *     _lambda_ad47fb4abf013fdcb1f378688d8640ff_::operator() @ 0x1805848CC (_lambda_ad47fb4abf013fdcb1f378688d8640ff_--operator().c)
 *     _lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator() @ 0x180584A60 (_lambda_fd4539b3655cc22a40f9c1e0d2159299_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::History(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}

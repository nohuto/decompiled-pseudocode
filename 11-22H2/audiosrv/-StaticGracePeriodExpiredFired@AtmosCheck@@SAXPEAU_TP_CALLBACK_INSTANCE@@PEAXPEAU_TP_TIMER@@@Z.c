/*
 * XREFs of ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::StaticGracePeriodExpiredFired(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        __int64 Timer,
        __int64 a4)
{
  __int64 v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  v4 = Context;
  if ( (unsigned int)dword_1801CD2B8 > 5 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD2B8,
      (unsigned __int8 *)dword_180199220,
      0LL,
      0LL,
      2u,
      &v5);
  LOBYTE(Context) = 1;
  *(_DWORD *)(v4 + 184) = 5;
  *(_BYTE *)(v4 + 216) = 1;
  AtmosCheck::PerformLicenseCheck((AtmosCheck *)v4, Context, Timer, a4);
  *(_BYTE *)(v4 + 99) = 1;
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)(v4 + 240),
    0LL);
}

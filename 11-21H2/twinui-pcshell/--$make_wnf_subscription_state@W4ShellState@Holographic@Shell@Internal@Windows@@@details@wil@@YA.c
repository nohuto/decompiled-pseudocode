/*
 * XREFs of ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x180170FBC
 * Callers:
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7590 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002A1A4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@@Z @ 0x1800E24A0 (--0-$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBU_S.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E473C (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v12 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6
    || (v7 = wil::details::wnf_subscription_state<_SEB_EVENT_HEADER>::wnf_subscription_state<_SEB_EVENT_HEADER>(v6, a2)) == 0LL )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    return v11;
  }
  v8 = v12;
  if ( v12 != -1 )
    goto LABEL_4;
  v11 = NtQueryWnfStateData(&WNF_HOLO_SHELL_STATE, 0LL, 0LL, &v12) | 0x10000000;
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -805306333 )
  {
    v8 = v12;
LABEL_4:
    v13 = v7 + 1;
    v14 = 0LL;
    v15 = 1;
    v9 = RtlSubscribeWnfStateChangeNotification(
           &v14,
           WNF_HOLO_SHELL_STATE,
           v8,
           _lambda_c38bfd10498b2e9fce262131177562b7_::_lambda_invoker_cdecl_,
           v7,
           0LL,
           0,
           0);
    if ( v15 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v13,
        v14);
    if ( v9 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3B8,
            (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A9,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
    (const char *)v11);
LABEL_12:
  (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
  return v11;
}

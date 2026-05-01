/*
 * XREFs of ??$make_wnf_subscription_state@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@KPEAPEAU?$wnf_subscription_state@E@01@@Z @ 0x1800A4CF4
 * Callers:
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1800A4CB8 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@@Z @ 0x1800A370C (--0-$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEB_N@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1800A5BFC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned char>(
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
  int v12; // [rsp+20h] [rbp-40h]
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v13 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 || (v7 = wil::details::wnf_subscription_state<bool>::wnf_subscription_state<bool>(v6, a2)) == 0LL )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL,
      v12);
    return v11;
  }
  v8 = v13;
  if ( v13 != -1 )
    goto LABEL_4;
  v11 = NtQueryWnfStateData(&WNF_PO_PDC_SHELL_PHASE_NOTIFICATION, 0LL, 0LL, &v13) | 0x10000000;
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -805306333 )
  {
    v8 = v13;
LABEL_4:
    v14 = v7 + 1;
    v15 = 0LL;
    v16 = 1;
    v9 = RtlSubscribeWnfStateChangeNotification(
           &v15,
           WNF_PO_PDC_SHELL_PHASE_NOTIFICATION,
           v8,
           _lambda_f88dcadf2f2e3bf99c8fb7858933000d_::_lambda_invoker_cdecl_,
           v7,
           0LL,
           0,
           0);
    if ( v16 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v14,
        v15);
    if ( v9 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v11,
    0);
LABEL_12:
  (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
  return v11;
}

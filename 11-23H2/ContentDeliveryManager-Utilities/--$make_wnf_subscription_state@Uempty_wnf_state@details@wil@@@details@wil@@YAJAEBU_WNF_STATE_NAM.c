/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180066A54
 * Callers:
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180066A04 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003F2A8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180067394 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ebx
  unsigned int v12; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v13)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  v12 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v9;
  }
  v6[1] = 0LL;
  *v6 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    v6[16] = v6 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    v6[16] = 0LL;
  }
  v8 = v12;
  if ( v12 != -1 )
    goto LABEL_11;
  v17 = 0;
  v9 = NtQueryWnfStateData(&WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED, 0LL, 0LL, &v12, 0LL, &v17) | 0x10000000;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -805306333 )
  {
    v8 = v12;
LABEL_11:
    v13 = v7 + 1;
    v14 = 0LL;
    v15 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v14,
            WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED,
            v8,
            _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_,
            v7,
            0LL,
            0,
            0);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v13);
    if ( v10 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3C7,
           (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v9);
LABEL_9:
  (**v7)(v7, 1LL);
  return v9;
}

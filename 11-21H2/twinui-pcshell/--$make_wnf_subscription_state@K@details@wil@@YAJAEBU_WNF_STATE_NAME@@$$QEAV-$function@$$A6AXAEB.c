/*
 * XREFs of ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800E4808
 * Callers:
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E33F0 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E47C8 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002A1A4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned long>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  int v10; // r15d
  __int64 v11; // r13
  _QWORD *v12; // rsi
  __int64 v13; // r14
  unsigned int v15; // ebx
  DWORD LastError; // ebx
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v17 = 0;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (__int64)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)0x8007000ELL);
    return v15;
  }
  v7[1] = 0LL;
  *v7 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    v7[16] = v7 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    v7[16] = 0LL;
  }
  v9 = v17;
  if ( v17 != -1 )
    goto LABEL_5;
  v15 = NtQueryWnfStateData(a1, 0LL, 0LL, &v17) | 0x10000000;
  if ( (int)(v15 + 0x80000000) < 0 || v15 == -805306333 )
  {
    v9 = v17;
LABEL_5:
    v18 = v8 + 1;
    v19 = 0LL;
    v20 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v19,
            *a1,
            v9,
            _lambda_a14e49ce427a1853f087bba834558a2c_::_lambda_invoker_cdecl_,
            v8,
            0LL,
            0,
            0);
    if ( v20 )
    {
      v11 = v19;
      v12 = v18;
      v13 = *v18;
      if ( *v18 )
      {
        LastError = GetLastError();
        RtlUnsubscribeWnfNotificationWaitForCompletion(v13);
        SetLastError(LastError);
      }
      *v12 = v11;
    }
    if ( v10 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v15 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3B8,
            (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
            (const char *)(unsigned int)v10);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A9,
    (__int64)"onecore\\internal\\sdk\\inc\\wil/resource.h",
    (const char *)v15);
LABEL_16:
  (**v8)(v8, 1LL);
  return v15;
}

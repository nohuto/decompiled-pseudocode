/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800E45A8
 * Callers:
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E3EC0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E4560 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002A1A4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned int v14; // ebx
  DWORD LastError; // ebx
  __int64 *v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v20; // [rsp+B0h] [rbp+50h] BYREF
  int v21; // [rsp+B8h] [rbp+58h]

  v20 = a3;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v14;
  }
  v7[1] = 0LL;
  *v7 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
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
  v9 = v20;
  if ( v20 != -1 )
    goto LABEL_5;
  v21 = 0;
  v14 = NtQueryWnfStateData(a1, 0LL, 0LL, &v20) | 0x10000000;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -805306333 )
  {
    v9 = v20;
LABEL_5:
    v16 = (__int64 *)(v8 + 1);
    v17 = 0LL;
    v18 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v17,
            *a1,
            v9,
            _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_,
            v8,
            0LL,
            0,
            0);
    if ( v18 )
    {
      v11 = v17;
      v12 = *v16;
      if ( *v16 )
      {
        LastError = GetLastError();
        RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
        SetLastError(LastError);
      }
      *v16 = v11;
    }
    if ( v10 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3B8,
            (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v10);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A9,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v14);
LABEL_17:
  (**v8)(v8, 1LL);
  return v14;
}

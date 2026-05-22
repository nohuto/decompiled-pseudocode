/*
 * XREFs of ??0RotationWatcher@@AEAA@XZ @ 0x180124EF8
 * Callers:
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x180125218 (-Initialize@RotationWatcher@@SAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x1800A4DD4 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D101C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180124CF0 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180125520 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

// Hidden C++ exception states: #wind=4
RotationWatcher *__fastcall RotationWatcher::RotationWatcher(RotationWatcher *this)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 *v4; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // r14
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-69h] BYREF
  wil::details *v13; // [rsp+30h] [rbp-61h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v16[15]; // [rsp+50h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v14[1] = (__int64)&qword_180278258;
  qword_180278258 = 0LL;
  v12 = 0LL;
  v1 = CoreUICreate(&v12);
  if ( v1 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
      (const char *)(unsigned int)v1,
      v12);
  v2 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v16[0] = &off_18020A908;
  v14[0] = 0LL;
  v16[1] = v2;
  v16[13] = v16;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v14);
  v4 = wil::make_wnf_subscription<wil::details::empty_wnf_state>(&v13, v3, (__int64)v15);
  v6 = v4;
  if ( &qword_180278258 != v4 )
  {
    v7 = *v4;
    v8 = (wil::details *)qword_180278258;
    if ( qword_180278258 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v8, v10);
      SetLastError(LastError);
    }
    qword_180278258 = v7;
    *v6 = 0LL;
  }
  if ( v13 )
    wil::details::delete_wnf_subscription_state(v13, v5);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)v15);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v12);
  return (RotationWatcher *)&qword_180278258;
}

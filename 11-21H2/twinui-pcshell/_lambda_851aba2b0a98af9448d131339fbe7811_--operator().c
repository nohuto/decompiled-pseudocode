/*
 * XREFs of _lambda_851aba2b0a98af9448d131339fbe7811_::operator() @ 0x180441154
 * Callers:
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180444DD4 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9880 (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_851aba2b0a98af9448d131339fbe7811_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall ****v3)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ****v11)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h]

  v2 = Platform::Details::ResolveWeakReference(&_uuidof__AU__IXamlAllUpViewControllerPublicNonVirtuals__, a1);
  v10 = (__int64 *)v2;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))__abi_winrt_ptr_ctor(v2);
  v11 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v3 )
  {
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(v3 + 7, &v10);
    v4 = *v10;
    if ( *(_BYTE *)(a1 + 8) )
    {
      v5 = (*(__int64 (**)(void))(v4 + 64))();
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 230LL;
LABEL_9:
        wil::details::in1diag3::_Log_Hr(
          v6,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    else
    {
      v5 = (*(__int64 (**)(void))(v4 + 40))();
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 234LL;
        goto LABEL_9;
      }
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v10);
  }
  if ( v3 )
    ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
  return 0LL;
}

/*
 * XREFs of ?TryGetSelectedTabForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180455684
 * Callers:
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18004F3CC (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801ADF38 (--$copy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AppViewDataSourceAdapterBase::TryGetSelectedTabForView(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    v10 = 0LL;
    v5 = *v4;
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 56))(v4, a3, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x103,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v6,
        v8);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::copy<Windows::Internal::ComposableShell::Tabs::IShellTab>(
      &v10,
      a2);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v10);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}

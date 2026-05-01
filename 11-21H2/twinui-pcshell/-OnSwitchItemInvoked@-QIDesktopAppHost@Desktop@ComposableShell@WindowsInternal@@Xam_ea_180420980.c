/*
 * XREFs of ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x180420980
 * Callers:
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1801FD430 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180420E04 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _OnSwitchItemInvoked__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXPE_AAUISwitchItem_Multitasking_3Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v5, a2);
  if ( !v5 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCB,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)0x8000FFFFLL,
      v3);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCC,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v2,
      v3);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v5);
}

/*
 * XREFs of _lambda_016357a68a66a38c92724bcadaa06521_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x1801F4094
 * Callers:
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180055220 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_016357a68a66a38c92724bcadaa06521_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
        _QWORD **a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2[2] != **a1 )
    return 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)a2[1] + 472LL))(a2[1]) != 3 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 128LL))(*a2, 1LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x538,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
  }
  return 1;
}

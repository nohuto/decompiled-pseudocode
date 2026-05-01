/*
 * XREFs of _lambda_6132476277337d0bc4a737e12882e87d_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x1803E8008
 * Callers:
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6360 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_6132476277337d0bc4a737e12882e87d_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
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
        (void *)0x514,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
  }
  return 1;
}

/*
 * XREFs of ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180055220
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x18017EA40 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x18017EC40 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_016357a68a66a38c92724bcadaa06521_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x1801F4094 (_lambda_016357a68a66a38c92724bcadaa06521_--operator()_UwpWindowEventDispatcher--PendingActivatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowNavigatedToVisible(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int *v12; // [rsp+60h] [rbp+18h] BYREF
  int *v13; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *, int *))(*(_QWORD *)a2 + 80LL))(
           a2,
           &v11);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x530,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v9);
    v4 = *((_QWORD *)this + 64);
    v5 = *((_QWORD *)this + 63);
    v13 = &v11;
    v12 = &v11;
    while ( v5 != v4
         && !(unsigned __int8)lambda_016357a68a66a38c92724bcadaa06521_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
                                &v12,
                                v5) )
      v5 += 32LL;
    v6 = v5;
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v5 += 32LL;
        if ( v5 == v4 )
          break;
        if ( !(unsigned __int8)lambda_016357a68a66a38c92724bcadaa06521_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
                                 &v13,
                                 v5) )
        {
          UwpWindowEventDispatcher::PendingActivationResumeData::operator=(v6, v5);
          v6 += 32LL;
        }
      }
    }
    std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(
      (char *)this + 504,
      &v12,
      v6,
      *((_QWORD *)this + 64));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x542,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v7);
  }
  return result;
}

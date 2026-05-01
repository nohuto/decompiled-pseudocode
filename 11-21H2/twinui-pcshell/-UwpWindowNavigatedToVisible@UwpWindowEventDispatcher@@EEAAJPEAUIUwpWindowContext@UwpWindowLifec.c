/*
 * XREFs of ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6360
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_6132476277337d0bc4a737e12882e87d_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x1803E8008 (_lambda_6132476277337d0bc4a737e12882e87d_--operator()_UwpWindowEventDispatcher--PendingActivatio.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803EABE4 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x1803F86BC (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowNavigatedToVisible(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *a2)
{
  int v3; // eax
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int *v13; // [rsp+60h] [rbp+18h] BYREF
  int *v14; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 80LL))();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x50C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v10);
    v4 = (__int64 *)*((_QWORD *)this + 62);
    v5 = (__int64 *)*((_QWORD *)this + 61);
    v14 = &v12;
    v13 = &v12;
    while ( v5 != v4
         && !lambda_6132476277337d0bc4a737e12882e87d_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
               (_QWORD **)&v13,
               v5) )
      v5 += 4;
    v6 = v5;
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v5 += 4;
        if ( v5 == v4 )
          break;
        if ( !lambda_6132476277337d0bc4a737e12882e87d_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
                (_QWORD **)&v14,
                v5) )
        {
          UwpWindowEventDispatcher::PendingActivationResumeData::operator=(v6, v5, v7);
          v6 += 4;
        }
      }
    }
    std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(
      (char *)this + 488,
      &v13,
      v6,
      *((_QWORD *)this + 62));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x51E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v8);
  }
  return result;
}

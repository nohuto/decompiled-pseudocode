/*
 * XREFs of ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x1803F0EB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_362f4c4eb4ca595a2ded14b60ff82544___::Run @ 0x1803F1060 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_362f4c4eb4ca595a2ded14b60ff82544___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@@Z @ 0x1803F8720 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator_ea_1803F8720.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowEventDispatcher::RemovePendingActivationResume(RTL_SRWLOCK *this, int a2)
{
  _QWORD *Ptr; // rbx
  int v5; // eax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v8, this + 59);
  Ptr = this[63].Ptr;
  try
  {
    while ( Ptr != this[64].Ptr )
    {
      if ( *((_DWORD *)Ptr + 6) == a2 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)Ptr[1] + 472LL))(Ptr[1]) != 3 )
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*Ptr + 128LL))(*Ptr, 1LL);
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x501,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v5);
        }
        std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(&this[63], &v9, Ptr);
        break;
      }
      Ptr += 4;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x506,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v6);
  }
}

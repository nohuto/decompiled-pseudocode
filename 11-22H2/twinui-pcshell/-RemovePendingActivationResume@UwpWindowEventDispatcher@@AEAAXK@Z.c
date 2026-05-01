/*
 * XREFs of ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x18017EAC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::Run @ 0x18017EAB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@@Z @ 0x18017EB80 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator_ea_18017EB80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowEventDispatcher::RemovePendingActivationResume(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  _QWORD *i; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 61;
  AcquireSRWLockExclusive(this + 61);
  v9 = v4;
  v5 = this + 65;
  for ( i = this[65].Ptr; i != v5[1].Ptr; i += 4 )
  {
    if ( *((_DWORD *)i + 6) == a2 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 472LL))(i[1]) != 3 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 128LL))(*i, 1LL);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x525,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v7);
      }
      std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(v5, &v9, i);
      break;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

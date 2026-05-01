/*
 * XREFs of ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x18019E120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18009E690 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18019E1AC (-clear@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpWindowEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *v4; // r13
  PVOID v6; // r14
  __int64 (__fastcall *v7)(PVOID, _QWORD, _QWORD); // r12
  unsigned int *v8; // rax
  int v9; // eax
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, __int64 *); // r12
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-58h] BYREF
  char v17; // [rsp+24h] [rbp-54h]
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-50h]
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+88h] [rbp+10h] BYREF
  char v22; // [rsp+90h] [rbp+18h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v18 = this;
  v2 = this + 35;
  Ptr = this[35].Ptr;
  v4 = this[36].Ptr;
  while ( Ptr != v4 )
  {
    v23 = 0LL;
    AcquireSRWLockExclusive(this + 45);
    v19 = this + 45;
    v6 = this[24].Ptr;
    v7 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v6 + 64LL);
    v8 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*Ptr + 288LL))(*Ptr, &v22);
    v9 = v7(v6, *v8, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    v10 = *Ptr;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*Ptr + 232LL);
    v12 = v23;
    v23 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = v11(v10, &v23);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    if ( this != (RTL_SRWLOCK *)-360LL )
      ReleaseSRWLockExclusive(this + 45);
    if ( v23 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v21);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          v16);
      v16 = v21;
      v17 = 0;
      v15 = UwpWindowEventDispatcher::UwpWindowRemoved(
              (UwpWindowEventDispatcher *)&this[-14],
              (const struct Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextRemovedEventArgs *)&v16);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v15);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    ++Ptr;
  }
  std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear(v2);
  AcquireSRWLockExclusive(this + 45);
  LOBYTE(this[48].Ptr) = 1;
  if ( this != (RTL_SRWLOCK *)-360LL )
    ReleaseSRWLockExclusive(this + 45);
  return 0LL;
}

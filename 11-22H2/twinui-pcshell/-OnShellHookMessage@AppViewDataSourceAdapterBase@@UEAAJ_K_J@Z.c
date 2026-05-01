/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x1802ED980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800827A4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  const char *v7; // r9
  __int64 *Ptr; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  try
  {
    if ( a2 == 6 )
    {
      v12 = 0LL;
      Ptr = (__int64 *)this[3].Ptr;
      v9 = *Ptr;
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 48))(Ptr, a3, &v12);
      if ( v12 )
      {
        AppViewDataSourceAdapterBase::FindItemForView((__int64)&this[-1], &v13, v12);
        if ( v13 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))this[-1].Ptr + 12))(this - 1, v12);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}

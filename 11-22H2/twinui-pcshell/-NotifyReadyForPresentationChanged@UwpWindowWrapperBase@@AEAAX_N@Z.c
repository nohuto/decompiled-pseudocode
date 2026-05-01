/*
 * XREFs of ?NotifyReadyForPresentationChanged@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x180042300
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call @ 0x180064360 (std--_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018A0B8 (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1801DDC34 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--__lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a6d0d909e7d7253cd78b9137e9e20418___ @ 0x1801F6420 (Windows--Internal--ComTaskPool--QueueTask__lambda_a6d0d909e7d7253cd78b9137e9e20418___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___ @ 0x1801F64B0 (Windows--Internal--ComTaskPool--QueueTask__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::NotifyReadyForPresentationChanged(UwpWindowWrapperBase *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 232LL))(*((_QWORD *)this + 35));
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 176) )
    {
      *((_BYTE *)this + 176) = 1;
      v14 = *((int *)this + 74);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_a6d0d909e7d7253cd78b9137e9e20418___(
             v5,
             v4,
             *((unsigned int *)this + 142),
             &v14);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAF2,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v11[0]);
    }
  }
  v7 = ((unsigned __int64)this + 48) & -(__int64)(this != 0LL);
  if ( v7 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(((unsigned __int64)this + 48) & -(__int64)(this != 0LL));
  *(_QWORD *)v11 = this;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    v12,
    ((unsigned __int64)this + 48) & -(__int64)(this != 0LL));
  v12[8] = a2;
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___(
          v9,
          v8,
          *((unsigned int *)this + 142),
          v11);
  lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_(v11);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAFD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v10,
      v11[0]);
  if ( v7 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
}

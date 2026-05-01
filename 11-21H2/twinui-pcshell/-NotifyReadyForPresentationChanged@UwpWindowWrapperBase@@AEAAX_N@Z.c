/*
 * XREFs of ?NotifyReadyForPresentationChanged@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x1804159F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f524bd3234a557ea0b75a9804999eee8__void_bool_::_Do_call @ 0x180418C90 (std--_Func_impl_no_alloc__lambda_f524bd3234a557ea0b75a9804999eee8__void_bool_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180409088 (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_310967b6236448b3e5aa64da1763cc03___ @ 0x18040EDBC (Windows--Internal--ComTaskPool--QueueTask__lambda_310967b6236448b3e5aa64da1763cc03___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fca2146b189bf76e53bab88150684c56___ @ 0x18040F0E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_fca2146b189bf76e53bab88150684c56___.c)
 */

void __fastcall UwpWindowWrapperBase::NotifyReadyForPresentationChanged(UwpWindowWrapperBase *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 232LL))(*((_QWORD *)this + 34));
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 168) )
    {
      v6 = *((_DWORD *)this + 140);
      v16 = *((int *)this + 72);
      *((_BYTE *)this + 168) = 1;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_fca2146b189bf76e53bab88150684c56___(v5, v4, v6, &v16);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xACC,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v16,
    (__int64)this + 40);
  *(_QWORD *)v12 = this;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v13,
    v16);
  v8 = *((_DWORD *)this + 140);
  v14 = a2;
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_310967b6236448b3e5aa64da1763cc03___(v10, v9, v8, (__int64)v12);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAD7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v11);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
}

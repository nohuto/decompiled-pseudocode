/*
 * XREFs of ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x1804EAD58
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Do_call @ 0x1804EDB60 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018A0B8 (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_029abab5a5354574d9f4afbbc91035ea___ @ 0x1804E3890 (Windows--Internal--ComTaskPool--QueueTask__lambda_029abab5a5354574d9f4afbbc91035ea___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7f99cf75152af1ff2ebde7d1303c0d37___ @ 0x1804E3A78 (Windows--Internal--ComTaskPool--QueueTask__lambda_7f99cf75152af1ff2ebde7d1303c0d37___.c)
 */

void __fastcall WindowWrapperBase::NotifyReadyForPresentationChanged(WindowWrapperBase *this, char a2)
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

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 176) )
    {
      v6 = *((_DWORD *)this + 142);
      v16 = *((int *)this + 74);
      *((_BYTE *)this + 176) = 1;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_7f99cf75152af1ff2ebde7d1303c0d37___(v5, v4, v6, &v16);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA4A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v16,
    ((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *(_QWORD *)v12 = this;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v13,
    v16);
  v8 = *((_DWORD *)this + 142);
  v14 = a2;
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_029abab5a5354574d9f4afbbc91035ea___(v10, v9, v8, (__int64)v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA55,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
}

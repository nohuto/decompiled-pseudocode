/*
 * XREFs of ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1804C71E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0250 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1804CD3A4 (-clear@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::PerformDelayedInitialization(WindowEventDispatcher *this)
{
  WindowEventDispatcher *v1; // rbx
  char *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r13
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // r12
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **); // r12
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v11; // rcx
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v16; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v21; // [rsp+68h] [rbp+10h] BYREF
  WindowEventDispatcher *v22; // [rsp+70h] [rbp+18h]
  char *v23; // [rsp+78h] [rbp+20h]

  v1 = this;
  v22 = this;
  v2 = (char *)this + 264;
  v3 = (_QWORD *)*((_QWORD *)this + 33);
  v4 = (_QWORD *)*((_QWORD *)this + 34);
  try
  {
    while ( v3 != v4 )
    {
      v21 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)v1 + 43);
      v23 = (char *)v1 + 344;
      v5 = *((_QWORD *)v1 + 23);
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 288LL))(*v3);
      v8 = v6(v5, v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = *v3;
      v10 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)*v3 + 240LL);
      v11 = v21;
      v21 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v10(v9, &v21);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA9,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      if ( v1 != (WindowEventDispatcher *)-344LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v1 + 43);
      if ( v21 )
      {
        v13 = WindowEventDispatcher::AppViewRemoved((RTL_SRWLOCK *)v1 - 14, v21);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
      ++v3;
    }
    std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear(v2);
    v15 = (RTL_SRWLOCK *)v1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v14);
    v15 = (RTL_SRWLOCK *)v22;
    v1 = this;
  }
  v16 = v15 + 43;
  AcquireSRWLockExclusive(v15 + 43);
  *((_BYTE *)v1 + 368) = 1;
  if ( v16 )
    ReleaseSRWLockExclusive(v16);
  return 0LL;
}

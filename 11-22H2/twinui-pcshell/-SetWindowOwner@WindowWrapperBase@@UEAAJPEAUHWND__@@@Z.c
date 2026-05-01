/*
 * XREFs of ?SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1804ED190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1804EB144 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetWindowOwner(WindowWrapperBase *this, HWND a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v5 = *((int *)this + 74);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( !v5 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80070490LL,
        v10);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 168LL))(
                     *((_QWORD *)this + 35),
                     &v13);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND))(*(_QWORD *)*v6 + 24LL))(*v6, v5, a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    result = 2147943800LL;
    if ( v7 != -2147023496 )
    {
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v10);
      if ( !a2 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(
          *((_QWORD *)this + 35),
          &SRWLock);
        WindowWrapperBase::PushZbidToWindow((__int64)this, *((_DWORD *)this + 127));
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}

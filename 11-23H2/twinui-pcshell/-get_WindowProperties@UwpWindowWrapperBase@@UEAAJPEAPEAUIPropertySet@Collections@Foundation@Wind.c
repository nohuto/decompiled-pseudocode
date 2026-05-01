/*
 * XREFs of ?get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804F3210
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef217250f0101fab299e7ccd919808f___ @ 0x1801F68B0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8ef217250f0101fab299e7ccd919808f.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::get_WindowProperties(
        UwpWindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  struct Windows::Foundation::Collections::IPropertySet **v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3);
    if ( *((_QWORD *)this + 14) )
    {
      *(_QWORD *)v9 = (char *)this - 16;
      *(_QWORD *)&v9[2] = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef217250f0101fab299e7ccd919808f___(
             v6,
             CurrentThreadId,
             (__int128 *)v9);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x560,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v9[0]);
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x565,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}

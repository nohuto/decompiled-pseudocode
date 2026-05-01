/*
 * XREFs of ?put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z @ 0x18004AD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___ @ 0x1801F7330 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::put_IsOccluded(UwpWindowWrapperBase *this, char a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    if ( (v13 != 0) != *((_BYTE *)this + 169) )
    {
      *(_QWORD *)v9 = (char *)this - 8;
      v10 = &v13;
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___(
             v6,
             CurrentThreadId,
             v9);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4DD,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v9[0]);
      *((_BYTE *)this + 169) = v13 != 0;
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E4,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}

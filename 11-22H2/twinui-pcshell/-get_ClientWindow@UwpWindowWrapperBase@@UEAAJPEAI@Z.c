/*
 * XREFs of ?get_ClientWindow@UwpWindowWrapperBase@@UEAAJPEAI@Z @ 0x18014BFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ClientWindow(UwpWindowWrapperBase *this, unsigned int *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v4 = *((_QWORD *)this + 29);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 256LL))((char *)this - 32);
    *a2 = v5;
    v7 = 0;
    if ( !v5 )
      v7 = -2147023728;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9F8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v6);
  }
  return result;
}

/*
 * XREFs of ?SetBackButtonVisibility@UwpWindowWrapperBase@@UEAAJW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z @ 0x1804F1960
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetBackButtonVisibility(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 264);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 128LL))(a1 - 16) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)0x80004001LL,
        v7);
    *(_DWORD *)(a1 + 448) = a2;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5F6,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}

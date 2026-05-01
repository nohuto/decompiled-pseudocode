/*
 * XREFs of ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1803BEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetFallbackForeground(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  signed __int32 Ptr_high; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v11 = v3;
  if ( v3 )
  {
    do
      Ptr_high = HIDWORD(v3[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v3[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v3 = v11;
  }
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !(unsigned int)SetFallbackForeground(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA7,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v8);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v11);
  return LastError;
}

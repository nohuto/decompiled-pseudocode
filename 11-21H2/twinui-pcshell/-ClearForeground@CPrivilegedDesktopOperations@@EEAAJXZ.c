/*
 * XREFs of ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1803BEB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::ClearForeground(CPrivilegedDesktopOperations *this)
{
  RTL_SRWLOCK *v1; // rbx
  unsigned int LastError; // edi
  signed __int32 Ptr_high; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v7 = v1;
  if ( v1 )
  {
    do
      Ptr_high = HIDWORD(v1[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v1[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v1 = v7;
  }
  AcquireSRWLockExclusive(v1 + 6);
  EnableIAMAccess(v1[5].Ptr, 1LL);
  if ( !(unsigned int)ClearForeground() )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x97,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v4);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v7);
  return LastError;
}

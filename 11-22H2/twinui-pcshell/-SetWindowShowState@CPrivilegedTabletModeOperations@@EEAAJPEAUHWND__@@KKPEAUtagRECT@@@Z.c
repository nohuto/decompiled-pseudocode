/*
 * XREFs of ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1804984C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedTabletModeOperations::SetWindowShowState(
        CPrivilegedTabletModeOperations *this,
        volatile int *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  RTL_SRWLOCK *v5; // rdi
  unsigned int LastError; // ebx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v13 = v5;
  if ( v5 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v5[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v5 + 6);
  EnableIAMAccess(v5[5].Ptr, 1LL);
  if ( !(unsigned int)SetWindowShowState(a2, a3, a4, a5) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x18D,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v13);
  return LastError;
}

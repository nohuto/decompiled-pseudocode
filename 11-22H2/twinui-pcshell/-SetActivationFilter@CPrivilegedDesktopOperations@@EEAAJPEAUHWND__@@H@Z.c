/*
 * XREFs of ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x180061A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActivationFilter(
        CPrivilegedDesktopOperations *this,
        volatile int *a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned int LastError; // ebx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v10 = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v3[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !(unsigned int)SetActivationFilter(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA0,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v10);
  return LastError;
}

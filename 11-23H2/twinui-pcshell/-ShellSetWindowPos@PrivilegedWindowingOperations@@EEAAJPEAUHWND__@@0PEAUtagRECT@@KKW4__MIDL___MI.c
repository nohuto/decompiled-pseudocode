/*
 * XREFs of ?ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MIDL_itf_privilegedoperations_0000_0010_0001@@@Z @ 0x180498690
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall PrivilegedWindowingOperations::ShellSetWindowPos(
        __int64 a1,
        volatile int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  RTL_SRWLOCK *v7; // rdi
  unsigned int LastError; // ebx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+50h] [rbp+8h] BYREF

  v7 = *(RTL_SRWLOCK **)(a1 + 48);
  LastError = 0;
  v15 = v7;
  if ( v7 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v7[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v7 + 6);
  EnableIAMAccess(v7[5].Ptr, 1LL);
  if ( !(unsigned int)ShellSetWindowPos(a2, a3, a4, a5, a6, a7) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x211,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v12);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v15);
  return LastError;
}

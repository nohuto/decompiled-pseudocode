/*
 * XREFs of ?SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOREGROUND_POLICY@@@Z @ 0x180498210
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedForegroundOperations::SetProcessLaunchForegroundPolicy(
        __int64 a1,
        volatile int *a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned int LastError; // ebx
  unsigned int v6; // ebp
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(RTL_SRWLOCK **)(a1 + 48);
  LastError = 0;
  v10 = v3;
  v6 = (unsigned int)a2;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v3[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !(unsigned int)SetProcessLaunchForegroundPolicy(v6, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x177,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v10);
  return LastError;
}

/*
 * XREFs of ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x18002AE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedForegroundOperations::AllowSetForegroundWindow(
        CPrivilegedForegroundOperations *this,
        volatile int *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastError; // edi
  DWORD CurrentProcessId; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v8 = v2;
  if ( v2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v2[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  CurrentProcessId = GetCurrentProcessId();
  if ( !AllowSetForegroundWindow(CurrentProcessId) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x161,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v8);
  return LastError;
}

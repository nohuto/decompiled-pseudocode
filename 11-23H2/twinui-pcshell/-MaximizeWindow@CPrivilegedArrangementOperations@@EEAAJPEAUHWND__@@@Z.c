/*
 * XREFs of ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x180497E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::MaximizeWindow(CPrivilegedArrangementOperations *this, HWND a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastError; // edi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v8 = v2;
  if ( v2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)((char *)&v2[4].Ptr + 4),
      (volatile int *)a2);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  if ( !PostMessageW(a2, 0x112u, 0xF030uLL, -1LL) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x140,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v8);
  return LastError;
}

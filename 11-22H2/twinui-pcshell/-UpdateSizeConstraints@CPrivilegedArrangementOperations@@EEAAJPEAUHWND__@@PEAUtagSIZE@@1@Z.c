/*
 * XREFs of ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x180498760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::UpdateSizeConstraints(
        CPrivilegedArrangementOperations *this,
        volatile int *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int LastErrorFailHr; // ebx
  wil::details *v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  v11 = v4;
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v4[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v4 + 6);
  EnableIAMAccess(v4[5].Ptr, 1LL);
  if ( !(unsigned int)UpdateWindowTrackingInfo(a2, a4, a3) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v11);
  return LastErrorFailHr;
}

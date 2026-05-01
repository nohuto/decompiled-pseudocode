/*
 * XREFs of ?RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z @ 0x180497EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800E916C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180140020 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::RegisterForCustomDockTargets(
        CPrivilegedArrangementOperations *this,
        volatile int *a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v2 = v5;
  winrt::com_ptr<CMultitaskingViewManager>::add_ref((__int64 *)&v5, a2);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  LODWORD(v2) = RegisterForCustomDockTargets(a2);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v5);
  return (unsigned int)v2;
}

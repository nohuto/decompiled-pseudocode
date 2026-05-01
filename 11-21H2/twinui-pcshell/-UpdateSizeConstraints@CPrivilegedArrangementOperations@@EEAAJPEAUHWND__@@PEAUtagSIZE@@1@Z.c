/*
 * XREFs of ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1803BF760
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::UpdateSizeConstraints(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int LastErrorFailHr; // edi
  signed __int32 Ptr_high; // eax
  __int64 v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  RTL_SRWLOCK *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  v15 = v4;
  if ( v4 )
  {
    do
      Ptr_high = HIDWORD(v4[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v4[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v4 = v15;
  }
  AcquireSRWLockExclusive(v4 + 6);
  EnableIAMAccess(v4[5].Ptr, 1LL);
  if ( !(unsigned int)UpdateWindowTrackingInfo(a2, a4, a3) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11, v10, v12, v13);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v15);
  return LastErrorFailHr;
}

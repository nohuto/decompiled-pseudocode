/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800FB320
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  __int64 v2; // rbx
  unsigned int LastErrorFailHr; // edi
  signed __int32 v5; // eax
  wil::details *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  v8 = v2;
  if ( v2 )
  {
    do
      v5 = *(_DWORD *)(v2 + 36);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 36), v5 + 1, v5) );
    v2 = v8;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(*(_QWORD *)(v2 + 40), 1LL);
  if ( !(unsigned int)GetWindowTrackInfoAsync(a2) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v8);
  return LastErrorFailHr;
}

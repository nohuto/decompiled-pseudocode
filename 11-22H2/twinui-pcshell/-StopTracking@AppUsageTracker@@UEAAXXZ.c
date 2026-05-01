/*
 * XREFs of ?StopTracking@AppUsageTracker@@UEAAXXZ @ 0x1801B6400
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::StopTracking(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int Ptr; // esi
  PVOID v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  Ptr = (unsigned int)this[8].Ptr;
  LODWORD(this[8].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  v4 = this[9].Ptr;
  if ( v4 )
  {
    if ( Ptr )
    {
      v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, Ptr);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6D,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v5,
          v6);
    }
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[10].Ptr + 32LL))(this[10].Ptr);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[11].Ptr + 32LL))(this[11].Ptr);
}

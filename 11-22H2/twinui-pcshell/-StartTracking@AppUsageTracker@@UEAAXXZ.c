/*
 * XREFs of ?StartTracking@AppUsageTracker@@UEAAXXZ @ 0x180621A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::StartTracking(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  int Ptr; // eax
  PVOID v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 7;
  AcquireSRWLockShared(this + 7);
  Ptr = (int)this[8].Ptr;
  v8 = Ptr;
  if ( v1 )
  {
    ReleaseSRWLockShared(v1);
    Ptr = v8;
  }
  v4 = this[9].Ptr;
  if ( v4 )
  {
    if ( !Ptr )
    {
      v5 = (*(__int64 (__fastcall **)(PVOID, unsigned __int64, int *))(*(_QWORD *)v4 + 96LL))(
             v4,
             (unsigned __int64)&this[1] & -(__int64)(this != 0LL),
             &v8);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5B,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v5,
          v6);
    }
  }
  AcquireSRWLockExclusive(v1);
  LODWORD(this[8].Ptr) = v8;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}

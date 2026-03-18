/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00308F0
 * Callers:
 *     GreGetNearestColor @ 0x1C0062D20 (GreGetNearestColor.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  struct _ERESOURCE *v5; // rdi
  __int64 v6; // r8

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 1) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange, a2);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 6) |= 8u;
    v5 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( v5 )
    {
      PsEnterPriorityRegion(v4);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
      v5 = *(struct _ERESOURCE **)this;
    }
    v6 = 11LL;
    if ( v5 == ghsemGreLock )
      v6 = 2LL;
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v5, v6);
  }
  if ( qword_1C029B090 && (int)qword_1C029B090() >= 0 )
  {
    if ( qword_1C029B098 )
      qword_1C029B098(this, 0LL);
  }
}

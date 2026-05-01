/*
 * XREFs of ?GetMonitor@CVirtualDesktop@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18055DC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktop::GetMonitor(CVirtualDesktop *this, HMONITOR *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), &SRWLock);
  v4 = SRWLock;
  *a2 = (HMONITOR)*((_QWORD *)this + 15);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

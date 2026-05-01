/*
 * XREFs of ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1804EB6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::RemoveSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  *((_DWORD *)this + 41) &= ~1u;
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
}

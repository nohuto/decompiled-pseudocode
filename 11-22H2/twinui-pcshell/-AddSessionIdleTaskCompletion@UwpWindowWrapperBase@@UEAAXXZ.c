/*
 * XREFs of ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x180072640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::AddSessionIdleTaskCompletion(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  *((_DWORD *)this + 41) |= 1u;
  UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)((char *)this - 16));
}

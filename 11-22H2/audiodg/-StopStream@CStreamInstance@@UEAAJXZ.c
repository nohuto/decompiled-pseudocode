/*
 * XREFs of ?StopStream@CStreamInstance@@UEAAJXZ @ 0x140009C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamInstance::StopStream(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = this + 5;
  EnterCriticalSection(this + 5);
  (*(void (__fastcall **)(ULONG_PTR *))(this[-1].SpinCount + 48))(&this[-1].SpinCount);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}

/*
 * XREFs of ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x1801283D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetPositionerPriority(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  PVOID Ptr; // rcx

  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  v5 = 0;
  *a2 = 0LL;
  Ptr = this[13].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    *a2 = this[13].Ptr;
  }
  else
  {
    v5 = -2147023728;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}

/*
 * XREFs of ?IsEmpty@CAppLayout@@UEAAHXZ @ 0x180795AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEmpty(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = 1;
  if ( this[9].Ptr
    && (this[9].Ptr != (PVOID)1
     || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this[8].Ptr + 24LL))(*(_QWORD *)this[8].Ptr) != 4) )
  {
    v3 = 0;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}

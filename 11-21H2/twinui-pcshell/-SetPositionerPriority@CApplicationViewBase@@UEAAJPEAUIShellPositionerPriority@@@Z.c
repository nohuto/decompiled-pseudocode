/*
 * XREFs of ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x18013B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::SetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority *a2)
{
  RTL_SRWLOCK *v4; // rdi
  struct IShellPositionerPriority *Ptr; // rax
  struct IShellPositionerPriority *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  Ptr = (struct IShellPositionerPriority *)this[13].Ptr;
  if ( Ptr != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)a2 + 8LL))(a2);
      Ptr = (struct IShellPositionerPriority *)this[13].Ptr;
    }
    v7 = Ptr;
    this[13].Ptr = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}

/*
 * XREFs of ?GetType@CAppLayoutItem@@UEAA?AW4APP_LAYOUT_ITEM_TYPE@@XZ @ 0x180797B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetType(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  v2 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  v3 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))a1[-1].Ptr + 3))(a1 - 1);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}

/*
 * XREFs of ?AcquireLockExclusive@UwpWindowEventDispatcher@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180163C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall UwpWindowEventDispatcher::AcquireLockExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = a1 + 59;
  AcquireSRWLockExclusive(a1 + 59);
  *a2 = v2;
  return a2;
}

/*
 * XREFs of ?GetCompatibilityPolicyType@CApplicationViewBase@@UEAAJPEAW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z @ 0x18005EAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetCompatibilityPolicyType(
        RTL_SRWLOCK *this,
        enum APPLICATION_VIEW_COMPATIBILITY_POLICY *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *(_DWORD *)a2 = this[11].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}

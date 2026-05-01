/*
 * XREFs of ?GetIsTabbed@CApplicationViewBase@@UEAAJPEAH@Z @ 0x1803D03D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetIsTabbed(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = LOBYTE(this[17].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}

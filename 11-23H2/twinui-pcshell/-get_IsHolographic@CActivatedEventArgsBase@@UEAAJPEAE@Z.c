/*
 * XREFs of ?get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x18073AE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_IsHolographic(RTL_SRWLOCK *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a2 = (unsigned __int8)this[11].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

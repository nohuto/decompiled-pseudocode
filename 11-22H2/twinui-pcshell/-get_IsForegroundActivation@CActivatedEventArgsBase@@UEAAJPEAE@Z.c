/*
 * XREFs of ?get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x18073ADA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_IsForegroundActivation(RTL_SRWLOCK *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a2 = BYTE6(this[9].Ptr);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

/*
 * XREFs of ?put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z @ 0x18073B300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::put_UserContext(RTL_SRWLOCK *this, void *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 15;
  AcquireSRWLockExclusive(this + 15);
  this[10].Ptr = a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}

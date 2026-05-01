/*
 * XREFs of ?get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z @ 0x18073B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_UserContext(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a2 = this[10].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

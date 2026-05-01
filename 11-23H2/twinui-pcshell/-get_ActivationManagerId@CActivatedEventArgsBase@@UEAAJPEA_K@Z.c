/*
 * XREFs of ?get_ActivationManagerId@CActivatedEventArgsBase@@UEAAJPEA_K@Z @ 0x18073AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::get_ActivationManagerId(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a2 = this[12].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

/*
 * XREFs of ?get_ActivationManagerActivityId@CActivatedEventArgsBase@@UEAAJPEAU_GUID@@@Z @ 0x18073ABF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_ActivationManagerActivityId(
        CActivatedEventArgsBase *this,
        struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 120);
  AcquireSRWLockShared((PSRWLOCK)this + 15);
  *a2 = *(struct _GUID *)((char *)this + 104);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

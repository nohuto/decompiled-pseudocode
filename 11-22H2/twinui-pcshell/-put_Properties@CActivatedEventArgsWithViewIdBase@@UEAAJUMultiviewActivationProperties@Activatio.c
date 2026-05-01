/*
 * XREFs of ?put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x18073B2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::put_Properties(__int64 a1, _OWORD *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(a1 + 40);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 40));
  *(_OWORD *)(a1 + 24) = *a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}

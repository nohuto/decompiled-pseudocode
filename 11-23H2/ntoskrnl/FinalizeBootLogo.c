/*
 * XREFs of FinalizeBootLogo @ 0x14054E7BC
 * Callers:
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14054E4FC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14054E58C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054E62C (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}

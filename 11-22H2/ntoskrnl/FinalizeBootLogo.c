/*
 * XREFs of FinalizeBootLogo @ 0x14054E85C
 * Callers:
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14054E59C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14054E62C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054E6CC (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}

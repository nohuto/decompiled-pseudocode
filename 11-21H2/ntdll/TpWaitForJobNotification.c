/*
 * XREFs of TpWaitForJobNotification @ 0x180085980
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x180085A30 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180085D0C (TppJobpValidateJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}

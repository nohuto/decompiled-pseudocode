/*
 * XREFs of TpWaitForJobNotification @ 0x180051050
 * Callers:
 *     <none>
 * Callees:
 *     TppJobpValidateJob @ 0x180050E84 (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x180050F50 (TppJobpRundownJob.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = TppJobpValidateJob(a1, 0LL, a3);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 128, 0LL, 1LL);
  }
  return result;
}

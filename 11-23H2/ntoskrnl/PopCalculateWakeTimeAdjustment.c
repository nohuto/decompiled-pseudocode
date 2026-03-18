/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x140987168
 * Callers:
 *     PopValidateRTCWake @ 0x140AA14D4 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x140255510 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1405834C0 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C3D0E0 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, &v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return PpmConvertTime(qword_140C3D448, PopQpcFrequency, 0x3E8uLL);
}

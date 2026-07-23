/*
 * XREFs of RtlQueryUnbiasedInterruptTime @ 0x180067AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077290 (RtlNtStatusToDosErrorNoTeb.c)
 */

BOOLEAN __cdecl RtlQueryUnbiasedInterruptTime(PLARGE_INTEGER InterruptTime)
{
  BOOLEAN result; // al
  LONG v2; // eax

  if ( InterruptTime )
  {
    result = 1;
    InterruptTime->QuadPart = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  else
  {
    v2 = RtlNtStatusToDosErrorNoTeb(-1073741811);
    RtlSetLastWin32Error(v2);
    return 0;
  }
  return result;
}

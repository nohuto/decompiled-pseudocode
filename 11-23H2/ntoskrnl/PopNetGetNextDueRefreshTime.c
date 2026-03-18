/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1409967B8
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409968F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996A30 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x14033B2A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER LocalTime; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp+10h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( qword_140C3CD28
    && MEMORY[0xFFFFF78000000014] < qword_140C3CD28
    && qword_140C3CD28 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (LARGE_INTEGER)(qword_140C3CD28 - 1200000000);
  }
  else
  {
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    LocalTime.QuadPart = LocalTime.QuadPart
                       + 18000000000LL
                       - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
                       - 1200000000
                       + (-(__int64)((unsigned __int64)(18000000000LL
                                                      - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
    ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    return LocalTime;
  }
}

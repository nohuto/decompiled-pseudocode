/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x14083F368
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140821EA8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14033B5E0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B940 (RtlTimeToTimeFields.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  __int16 Day; // r14
  __int16 Month; // cx
  __int16 Weekday; // r15
  __int16 v9; // bx
  __int16 Milliseconds; // ax
  __int16 v11; // r15
  __int16 v12; // si
  _TIME_FIELDS v14; // [rsp+20h] [rbp-30h] BYREF
  _TIME_FIELDS v15; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+80h] [rbp+30h] BYREF

  TimeFields = 0LL;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( !CutoverTime->Year )
  {
    Day = CutoverTime->Day;
    v14.Day = 0;
    Time.QuadPart = 0LL;
    v15 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Month = CutoverTime->Month;
        Weekday = CutoverTime->Weekday;
        v9 = 1;
        v14.Year = TimeFields.Year;
        v14.Hour = CutoverTime->Hour;
        v14.Minute = CutoverTime->Minute;
        v14.Second = CutoverTime->Second;
        Milliseconds = CutoverTime->Milliseconds;
        v14.Month = Month;
        v14.Milliseconds = Milliseconds;
        v14.Day = 1;
        v14.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v14, &Time) )
        {
          RtlTimeToTimeFields(&Time, &v15);
          if ( v15.Weekday <= Weekday )
          {
            if ( v15.Weekday < Weekday )
              v9 = Weekday - v15.Weekday + 1;
          }
          else
          {
            v9 = Weekday - v15.Weekday + 8;
          }
          v11 = v9;
          v12 = 1;
          if ( Day > 1 )
          {
            do
            {
              v9 += 7;
              v14.Day = v9;
              if ( !RtlTimeFieldsToTime(&v14, &Time) )
                break;
              RtlTimeToTimeFields(&Time, &v15);
              v11 = v15.Day;
              ++v12;
            }
            while ( v12 < Day );
          }
          v14.Day = v11;
          if ( RtlTimeFieldsToTime(&v14, &Time) )
          {
            *SystemTime = Time;
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(CutoverTime, SystemTime) != 0;
}

/*
 * XREFs of sub_140835D14 @ 0x140835D14
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_140864D14 @ 0x140864D14 (sub_140864D14.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 */

bool __fastcall sub_140835D14(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time, PLARGE_INTEGER a3)
{
  CSHORT Day; // r14
  CSHORT Month; // cx
  CSHORT Weekday; // r15
  CSHORT v8; // bx
  CSHORT Milliseconds; // ax
  CSHORT v10; // r15
  __int16 v11; // si
  _TIME_FIELDS v13; // [rsp+20h] [rbp-30h] BYREF
  _TIME_FIELDS v14; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFieldsa; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Timea; // [rsp+80h] [rbp+30h] BYREF

  TimeFieldsa = 0LL;
  RtlTimeToTimeFields(a3, &TimeFieldsa);
  if ( !TimeFields->Year )
  {
    Day = TimeFields->Day;
    v13.Day = 0;
    Timea.QuadPart = 0LL;
    v14 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Month = TimeFields->Month;
        Weekday = TimeFields->Weekday;
        v8 = 1;
        v13.Year = TimeFieldsa.Year;
        v13.Hour = TimeFields->Hour;
        v13.Minute = TimeFields->Minute;
        v13.Second = TimeFields->Second;
        Milliseconds = TimeFields->Milliseconds;
        v13.Month = Month;
        v13.Milliseconds = Milliseconds;
        v13.Day = 1;
        v13.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v13, &Timea) )
        {
          RtlTimeToTimeFields(&Timea, &v14);
          if ( v14.Weekday <= Weekday )
          {
            if ( v14.Weekday < Weekday )
              v8 = Weekday - v14.Weekday + 1;
          }
          else
          {
            v8 = Weekday - v14.Weekday + 8;
          }
          v10 = v8;
          v11 = 1;
          if ( Day > 1 )
          {
            do
            {
              v8 += 7;
              v13.Day = v8;
              if ( !RtlTimeFieldsToTime(&v13, &Timea) )
                break;
              RtlTimeToTimeFields(&Timea, &v14);
              v10 = v14.Day;
              ++v11;
            }
            while ( v11 < Day );
          }
          v13.Day = v10;
          if ( RtlTimeFieldsToTime(&v13, &Timea) )
          {
            *Time = Timea;
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(TimeFields, Time) != 0;
}

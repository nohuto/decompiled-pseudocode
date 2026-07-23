/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x1800592F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x1800594B0 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x1800597E0 (RtlpTimeToTimeFields.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  PTIME_FIELDS v6; // r14
  __int16 Day; // r12
  __int16 Weekday; // r15
  bool v10; // r13
  __int16 Month; // ax
  __int16 v12; // si
  __int16 v13; // di
  __int16 v14; // r15
  __int16 i; // r14
  __int16 v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  _WORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch]
  __int16 Hour; // [rsp+36h] [rbp-2Ah]
  __int16 Minute; // [rsp+38h] [rbp-28h]
  __int16 Second; // [rsp+3Ah] [rbp-26h]
  __int16 Milliseconds; // [rsp+3Ch] [rbp-24h]
  __int16 v25; // [rsp+3Eh] [rbp-22h]
  __int16 v26; // [rsp+40h] [rbp-20h] BYREF
  __int16 v27; // [rsp+42h] [rbp-1Eh]
  __int16 v28; // [rsp+44h] [rbp-1Ch]
  _BYTE v29[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Ch]
  __int16 v31; // [rsp+5Eh] [rbp-2h]

  v6 = CutoverTime;
  RtlpTimeToTimeFields(CurrentSystemTime, &v26, 0LL);
  if ( !v6->Year )
  {
    Day = v6->Day;
    if ( Day <= 5 && Day )
    {
      Weekday = v6->Weekday;
      v10 = 0;
      Month = v6->Month;
      v12 = v26;
      v17 = Weekday;
      if ( !ThisYear )
      {
        if ( Month >= v27 )
          v10 = Month <= v27;
        else
          v12 = v26 + 1;
      }
      v19[1] = v6->Month;
      v25 = 0;
      while ( 1 )
      {
        Hour = v6->Hour;
        Minute = v6->Minute;
        v13 = 1;
        Second = v6->Second;
        Milliseconds = v6->Milliseconds;
        v19[0] = v12;
        v20 = 1;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          break;
        RtlpTimeToTimeFields(&v18, v29, 0LL);
        if ( v31 <= Weekday )
        {
          if ( v31 < Weekday )
            v13 = Weekday - v31 + 1;
        }
        else
        {
          v13 = Weekday - v31 + 8;
        }
        v14 = v13;
        if ( Day > 1 )
        {
          for ( i = 1; i < Day; ++i )
          {
            v13 += 7;
            v20 = v13;
            if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
              break;
            RtlpTimeToTimeFields(&v18, v29, 0LL);
            v14 = v30;
          }
          v6 = CutoverTime;
        }
        v20 = v14;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          break;
        if ( !v10 || v14 >= v28 && (v14 != v28 || v18 >= CurrentSystemTime->QuadPart) )
        {
          SystemTime->QuadPart = v18;
          return 1;
        }
        Weekday = v17;
        v10 = 0;
        ++v12;
      }
    }
    return 0;
  }
  return (unsigned __int8)RtlpTimeFieldsToTime(v6, SystemTime, 0LL)
      && (ThisYear || SystemTime->QuadPart >= CurrentSystemTime->QuadPart);
}

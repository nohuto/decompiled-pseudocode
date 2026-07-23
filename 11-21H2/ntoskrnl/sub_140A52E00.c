/*
 * XREFs of sub_140A52E00 @ 0x140A52E00
 * Callers:
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1403B6B94 @ 0x1403B6B94 (sub_1403B6B94.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 */

void sub_140A52E00(char a1, char a2, int a3, ...)
{
  _QWORD *v6; // r14
  int v7; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+98h] [rbp+38h] BYREF
  va_list SystemTimea; // [rsp+98h] [rbp+38h]
  __int64 *v12; // [rsp+A0h] [rbp+40h]
  va_list va1; // [rsp+A8h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(SystemTimea, a3);
  SystemTime.QuadPart = va_arg(va1, _QWORD);
  v12 = va_arg(va1, __int64 *);
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  v6 = sub_140347DB0();
  if ( dword_140D01460 )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
  sub_1403B6B94((__int64)SystemTimea, (__int64)v12, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    sub_140835844(0);
    if ( !byte_140C0B228 )
    {
      if ( dword_140D01460 )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
    }
  }
  sub_1403B65EC((__int64 *)SystemTimea, v12, a3, (int)&LocalTime, *(_DWORD *)(v6[157] + 436LL), v7, byte_140C0B228);
}

/*
 * XREFs of sub_140A47884 @ 0x140A47884
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A531E0 @ 0x140A531E0 (sub_140A531E0.c)
 *     sub_140A6F010 @ 0x140A6F010 (sub_140A6F010.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A52E00 @ 0x140A52E00 (sub_140A52E00.c)
 */

char __fastcall sub_140A47884(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  char result; // al
  int v5; // edx
  unsigned __int64 v6; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  if ( !a2 )
    a2 = dword_140C0C658;
  v3 = 10000000LL * a2;
  result = HalQueryRealTimeClock((__int64)&TimeFields);
  if ( result )
  {
    result = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( result )
    {
      if ( dword_140D01460 )
        SystemTime = Time;
      else
        ExLocalTimeToSystemTime(&Time, &SystemTime);
      result = MEMORY[0xFFFFF78000000014];
      v9 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v6 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      else
        v6 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      if ( v6 > v3 )
      {
        LOBYTE(v5) = a1;
        return sub_140A52E00(0, v5, 2, SystemTime.LowPart, (__int64)&v9);
      }
    }
  }
  return result;
}

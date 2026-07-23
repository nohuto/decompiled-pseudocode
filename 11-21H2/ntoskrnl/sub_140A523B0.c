/*
 * XREFs of sub_140A523B0 @ 0x140A523B0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140396AF4 @ 0x140396AF4 (sub_140396AF4.c)
 *     sub_140806330 @ 0x140806330 (sub_140806330.c)
 *     sub_140A524B0 @ 0x140A524B0 (sub_140A524B0.c)
 */

__int64 __fastcall sub_140A523B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+18h] BYREF

  Time.QuadPart = 0LL;
  word_140C4A7A0 = 1;
  TimeFields = 0LL;
  v2 = sub_140A524B0(a1, MEMORY[0xFFFFF78000000008], MEMORY[0xFFFFF78000000008], a2);
  v5 = sub_140A524B0(v4, v3, v3, v4);
  v6 = v5;
  DbgPrintEx(0x65u, 3u, "HAL: Wake in %lu seconds on AC and in %lu seconds on DC\n", v2, v5);
  if ( (int)sub_140806330() >= 0 )
    return 0LL;
  if ( (dword_140C0C60C & 4) != 0 )
  {
    if ( v2 < (unsigned int)v6 )
      v6 = v2;
    if ( v6 != 0xFFFFFFFFLL )
    {
      if ( HalQueryRealTimeClock((__int64)&TimeFields) )
      {
        RtlTimeFieldsToTime(&TimeFields, &Time);
        Time.QuadPart += 10000000 * v6;
        RtlTimeToTimeFields(&Time, &TimeFields);
        HIBYTE(word_140C4A7A0) = 1;
        xmmword_140C4A7A2 = (__int128)TimeFields;
        return sub_140396AF4(v7, (unsigned __int8 *)&TimeFields);
      }
      return 3221225473LL;
    }
    return 0LL;
  }
  return 3221225473LL;
}

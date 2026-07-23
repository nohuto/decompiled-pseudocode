/*
 * XREFs of sub_1408357A0 @ 0x1408357A0
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1403B6B94 @ 0x1403B6B94 (sub_1403B6B94.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 */

void sub_1408357A0()
{
  __int64 v0; // rbx
  unsigned __int8 v1; // di
  int v2; // esi
  LARGE_INTEGER v3; // rax
  int v4; // [rsp+28h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+20h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp+28h] BYREF
  LARGE_INTEGER v8; // [rsp+80h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v8.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v0 = *((_QWORD *)sub_140347DB0() + 157);
  sub_1407D6F54(1u);
  v1 = byte_140C0B228;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v2 = *(_DWORD *)(v0 + 436);
      if ( (unsigned __int8)sub_140835844(0LL) )
      {
        if ( v2 != *(_DWORD *)(v0 + 436) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !dword_140D01460 )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v8);
              sub_1403B6B94((__int64)&v8, (__int64)&SystemTime, 0);
              goto LABEL_10;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields);
            v3 = SystemTime;
          }
          v8 = v3;
LABEL_10:
          sub_1403B65EC((__int64 *)&v8, (__int64 *)&SystemTime, 3, (int)&Time, *(_DWORD *)(v0 + 436), v4, v1);
        }
      }
    }
  }
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
}

/*
 * XREFs of HalSetRealTimeClock @ 0x140503420
 * Callers:
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A52E00 @ 0x140A52E00 (sub_140A52E00.c)
 *     sub_140B2EBF4 @ 0x140B2EBF4 (sub_140B2EBF4.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405101D0 @ 0x1405101D0 (sub_1405101D0.c)
 *     sub_1405184BC @ 0x1405184BC (sub_1405184BC.c)
 *     sub_140908208 @ 0x140908208 (sub_140908208.c)
 *     sub_1409082EC @ 0x1409082EC (sub_1409082EC.c)
 */

BOOLEAN __fastcall HalSetRealTimeClock(_TIME_FIELDS *a1)
{
  BOOLEAN result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // bl
  int v6; // edi
  int v7; // ecx
  char v8; // al
  char v9; // cl
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+28h] [rbp-20h] BYREF

  LocalTime.QuadPart = 0LL;
  InputBuffer = 0LL;
  result = RtlTimeFieldsToTime(a1, &LocalTime);
  if ( result )
  {
    if ( !dword_140D01460 )
      ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    if ( (dword_140C0C60C & 4) != 0 )
    {
      sub_1405184BC(a1);
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    v6 = dword_140C4BFCC;
    v7 = -1073741823;
    if ( KeGetCurrentIrql() >= 2u
      || dword_140C4BFCC
      || (v7 = sub_1409082EC(&LocalTime, (PLARGE_INTEGER)&InputBuffer), v7 < 0)
      || (v7 = sub_140908208(&InputBuffer), v7 < 0) )
    {
      if ( v5 != 1 && byte_140C4BFC8 && v6 && (dword_140C0C60C & 8) == 0 )
        v7 = sub_1405101D0(&LocalTime);
    }
    if ( v7 >= 0 )
      v5 = 1;
    v8 = sub_14022DA40((__int64 *)&LocalTime, v3, v4);
    v9 = v5;
    if ( v8 )
      return 1;
    return v9;
  }
  return result;
}

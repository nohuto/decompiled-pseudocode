/*
 * XREFs of SmpGetTime @ 0x140019898
 * Callers:
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 *     SmpLogPFROError @ 0x140019C98 (SmpLogPFROError.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpGetTime(PTIME_FIELDS TimeFields)
{
  __int64 SystemTimeAndBias; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp+18h] BYREF

  SystemTimeAndBias = RtlGetSystemTimeAndBias(&v3, 0LL, 0LL);
  Time.QuadPart = SystemTimeAndBias - v3;
  RtlTimeToTimeFields(&Time, TimeFields);
}

/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x140859AB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  SystemInformation = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    LocalTime->QuadPart = SystemTime->QuadPart - v6;
    return 0;
  }
  return result;
}

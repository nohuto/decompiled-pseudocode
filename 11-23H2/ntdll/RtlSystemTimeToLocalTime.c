/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x18007E520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0;
  }
  return result;
}

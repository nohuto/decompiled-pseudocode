/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x180088A44
 * Callers:
 *     RtlGetSystemBootStatus @ 0x1800889D0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x180088A10 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800FAB20 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800FACD0 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A1A80 (NtPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( a4 && 4 * (unsigned __int64)a3 > 0xFFFFFFFF )
    return 3221225621LL;
  v5[1] = 0;
  v5[3] = 0;
  v5[2] = a3;
  v5[0] = a1;
  v6 = a2;
  return NtPowerInformation(87LL, v5);
}

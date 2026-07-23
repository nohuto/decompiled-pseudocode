/*
 * XREFs of sub_1409964E4 @ 0x1409964E4
 * Callers:
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

NTSTATUS __fastcall sub_1409964E4(unsigned __int64 a1, unsigned __int64 a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-20h]

  if ( a2 > a1 )
  {
    result = dword_140D0525C;
    if ( (unsigned int)dword_140D0525C < (a2 - a1) / 0xF4240 )
    {
      v3 = a2;
      v4 = a1;
      result = ZwUpdateWnfStateData(&stru_1400377B8, &v3, 0x10u, 0LL, 0LL, 0, 0);
      if ( dword_140D052E4 )
        return DbgkWerCaptureLiveKernelDump(L"DripsDiverge", 420, v3, v4, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}

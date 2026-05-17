/*
 * XREFs of RtlResetStackOverflow @ 0x1800E9DC8
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateData @ 0x1800612E0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180125524 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 */

char *RtlResetStackOverflow()
{
  char *result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // [rsp+48h] [rbp-31h] BYREF
  __int64 v5; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v7 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v7 - 1LL);
    if ( v2 )
      v2 += v7;
    v3 = 3 * v7;
    if ( v2 < v3 )
      v2 = (unsigned int)v3;
    result = &v4;
    if ( ((unsigned __int64)&v4 & v1) - v2 >= v5 + (unsigned __int64)(17 * v7) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}

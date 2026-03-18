/*
 * XREFs of PspGetJobMemoryUsageNotificationViolations @ 0x1406FF050
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FECE0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobMemoryUsageNotificationViolations(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int16 a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 1176);
  if ( (*(_DWORD *)v4 & 0x200000) == 0 )
    a3 = a2;
  v5 = *(_QWORD *)(v4 + 40);
  result = 0LL;
  if ( v5 && (a4 & 0x200) != 0 && a3 > v5 )
    result = 512LL;
  v7 = *(_QWORD *)(v4 + 32);
  if ( v7 && a4 < 0 && a3 < v7 )
    return (unsigned int)result | 0x8000;
  return result;
}

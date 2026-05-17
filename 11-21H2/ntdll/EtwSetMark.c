/*
 * XREFs of EtwSetMark @ 0x180091E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

ULONG __fastcall EtwSetMark(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = NtTraceEvent(a1, 1536LL, a3, a2);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}

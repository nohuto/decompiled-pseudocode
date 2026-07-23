/*
 * XREFs of EtwLogTraceEvent @ 0x1800B1D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     EtwpTraceUmEvent @ 0x180125BB4 (EtwpTraceUmEvent.c)
 */

__int64 __fastcall EtwLogTraceEvent(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax

  v2 = 0;
  if ( !a2 )
    return 87LL;
  if ( (a1 & 0x1000000) != 0 )
    return (unsigned int)EtwpTraceUmEvent(a1, a2, 48LL, 3222536192LL);
  v5 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
  if ( v5 )
    return RtlNtStatusToDosError(v5);
  return v2;
}

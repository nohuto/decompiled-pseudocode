/*
 * XREFs of EtwReplyNotification @ 0x180007D40
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax

  v1 = 0;
  v2 = NtTraceControl(18LL, a1, *(unsigned int *)(a1 + 4));
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  EtwpReplySend = 1;
  return v1;
}

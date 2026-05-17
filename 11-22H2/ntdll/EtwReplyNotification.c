/*
 * XREFs of EtwReplyNotification @ 0x180061F10
 * Callers:
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(18LL, a1, *(unsigned int *)(a1 + 4), 0LL, 0, &v4);
  if ( v2 )
    return RtlNtStatusToDosError(v2);
  return v1;
}

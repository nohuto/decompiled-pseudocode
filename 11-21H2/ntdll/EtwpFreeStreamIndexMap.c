/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x180091218
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 488);
  if ( v1 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 488) = 0LL;
  }
  return result;
}

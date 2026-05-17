/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x18005DF60
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
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

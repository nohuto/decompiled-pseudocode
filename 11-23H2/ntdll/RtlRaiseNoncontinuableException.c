/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1800A59A0
 * Callers:
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1800A5150 (RtlpCaptureContext.c)
 */

char __fastcall RtlRaiseNoncontinuableException(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // [rsp+28h] [rbp-10h]
  __int64 v5; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext(a2);
  *(_QWORD *)(v5 + 152) = &v7;
  *(_QWORD *)(v5 + 248) = retaddr;
  if ( *(_QWORD *)(v4 + 16) == -1LL )
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v5 + 248);
  if ( !v2 || NtCurrentPeb()->BeingDebugged )
    return ZwRaiseException();
  else
    return RtlDispatchException(v4, v5);
}

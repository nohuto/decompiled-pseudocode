/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1800A38E0
 * Callers:
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1800A3090 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // r8
  struct _CONTEXT *v3; // [rsp+28h] [rbp-10h]
  __int64 v4; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext((__int64)ContextRecord);
  *(_QWORD *)(v4 + 152) = &v6;
  *(_QWORD *)(v4 + 248) = retaddr;
  if ( v3->P3Home == -1LL )
    v3->P3Home = *(_QWORD *)(v4 + 248);
  if ( !v2 || BYTE2(NtCurrentTeb()->NtTib.ExceptionList) )
    ZwRaiseException((PEXCEPTION_RECORD)v4, v3, v2);
  else
    RtlRaiseException((PEXCEPTION_RECORD)v4);
}

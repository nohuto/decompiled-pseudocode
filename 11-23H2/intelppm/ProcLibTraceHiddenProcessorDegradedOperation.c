/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0035A2C
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C00087D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00087FC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0035ACC (ProcLibTraceNoPayloadEvent.c)
 */

char ProcLibTraceHiddenProcessorDegradedOperation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0016038 > 5 )
  {
    result = tlgKeywordOn(v1, 0x400000000000LL);
    if ( result )
      return tlgWriteTransfer_EtwWriteTransfer(v2, (unsigned __int8 *)dword_1C0011F03, v3, v4, (ULONG)2, &v5);
  }
  return result;
}

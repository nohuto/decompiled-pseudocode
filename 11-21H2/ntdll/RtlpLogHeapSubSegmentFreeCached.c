/*
 * XREFs of RtlpLogHeapSubSegmentFreeCached @ 0x1801173FC
 * Callers:
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentFreeCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4146;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}

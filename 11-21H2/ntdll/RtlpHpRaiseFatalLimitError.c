/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x1801153DC
 * Callers:
 *     HeapCommitFailAvoidTriageRules @ 0x180114AC0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHpHeapHandleError @ 0x180115130 (RtlpHpHeapHandleError.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlReportFatalFailure @ 0x18010C0D0 (RtlReportFatalFailure.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_1801777A0;
  v2.ExceptionInformation[0] = dword_180177788;
  v2.ExceptionInformation[1] = qword_180177790;
  v2.ExceptionInformation[2] = qword_1801777A8;
  v2.ExceptionInformation[3] = qword_1801777B0;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}

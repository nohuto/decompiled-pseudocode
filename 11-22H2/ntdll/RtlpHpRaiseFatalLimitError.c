/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x1801157BC
 * Callers:
 *     HeapCommitFailAvoidTriageRules @ 0x180114F10 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHpHeapHandleError @ 0x180115510 (RtlpHpHeapHandleError.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlReportFatalFailure @ 0x18010C240 (RtlReportFatalFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&v2, 0, 0x98uLL);
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_180181880;
  v2.ExceptionInformation[0] = dword_180181868;
  v2.ExceptionInformation[1] = qword_180181870;
  v2.ExceptionInformation[2] = qword_180181888;
  v2.ExceptionInformation[3] = qword_180181890;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}

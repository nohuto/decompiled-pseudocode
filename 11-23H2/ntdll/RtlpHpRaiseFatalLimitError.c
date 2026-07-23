/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x180116C3C
 * Callers:
 *     HeapCommitFailAvoidTriageRules @ 0x180116390 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHpHeapHandleError @ 0x180116990 (RtlpHpHeapHandleError.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlReportFatalFailure @ 0x18010D6C0 (RtlReportFatalFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&v2, 0, 0x98uLL);
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_1801848D0;
  v2.ExceptionInformation[0] = dword_1801848B8;
  v2.ExceptionInformation[1] = qword_1801848C0;
  v2.ExceptionInformation[2] = qword_1801848D8;
  v2.ExceptionInformation[3] = qword_1801848E0;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}

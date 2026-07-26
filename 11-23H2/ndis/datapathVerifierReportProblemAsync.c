/*
 * XREFs of datapathVerifierReportProblemAsync @ 0x1C00726C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 datapathVerifierReportProblemAsync()
{
  __int64 result; // rax

  result = DbgkWerCaptureLiveKernelDump(
             L"NDIS",
             350LL,
             qword_1C00F78C0,
             qword_1C00F78C8,
             qword_1C00F78D0,
             qword_1C00F78D8,
             0LL,
             0LL,
             0);
  _InterlockedExchange(&dword_1C00F7870, 0);
  return result;
}

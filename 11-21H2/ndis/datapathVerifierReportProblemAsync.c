/*
 * XREFs of datapathVerifierReportProblemAsync @ 0x1C006D300
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
             qword_1C00EE7F0,
             qword_1C00EE7F8,
             qword_1C00EE800,
             qword_1C00EE808,
             0LL,
             0LL,
             0);
  _InterlockedExchange(&dword_1C00EE7A8, 0);
  return result;
}

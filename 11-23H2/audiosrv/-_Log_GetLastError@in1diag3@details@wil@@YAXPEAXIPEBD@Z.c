/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801205F4
 * Callers:
 *     wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___ @ 0x180073A74 (wil--details--lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___--_lambda_call__lambda_4fb8.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC08 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18011BC4C (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v4, retaddr);
}

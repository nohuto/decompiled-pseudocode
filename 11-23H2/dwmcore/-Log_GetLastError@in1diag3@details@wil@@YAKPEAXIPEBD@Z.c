/*
 * XREFs of ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x180203484
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1802023A8 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x180201C4C (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_GetLastError(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v5, retaddr);
}

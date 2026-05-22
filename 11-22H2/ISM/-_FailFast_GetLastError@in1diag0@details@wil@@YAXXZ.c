/*
 * XREFs of ?_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ @ 0x180129644
 * Callers:
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1801269BC (--1SipcPrivateNamespace@@QEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800A389C (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag0::_FailFast_GetLastError(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(0LL, 0LL, 0, a4, v4, retaddr);
}

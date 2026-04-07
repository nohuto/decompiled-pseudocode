/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F87FC
 * Callers:
 *     ?MonitorRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180013060 (-MonitorRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foundati.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800F869C (--$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_GetLastError(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<0>(this, a2, a3, a4, v4, retaddr);
}

/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800966A8
 * Callers:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180013A5C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800140B4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180056510 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009DC00 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180092904 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}

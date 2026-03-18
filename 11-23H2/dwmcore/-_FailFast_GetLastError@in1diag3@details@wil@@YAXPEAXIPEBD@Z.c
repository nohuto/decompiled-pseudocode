/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019A7EC
 * Callers:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800D1614 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x1800F39AC (-Run@CKstBase@@AEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F7520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800FA584 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800FB290 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180197088 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}

/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006670
 * Callers:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180004480 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180008F38 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180009258 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000C880 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180003894 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
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

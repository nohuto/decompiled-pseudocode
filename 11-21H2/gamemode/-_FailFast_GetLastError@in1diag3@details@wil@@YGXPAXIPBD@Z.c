/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x100033EE
 * Callers:
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YGXPAX@Z @ 0x1000349C (-ReleaseMutex@details@wil@@YGXPAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z @ 0x10003358 (--$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(void *a1, int a2)
{
  int v2; // [esp-10h] [ebp-20h]
  int v3; // [esp-Ch] [ebp-1Ch]
  int v4; // [esp-8h] [ebp-18h]
  char *retaddr; // [esp+14h] [ebp+4h]

  wil::details::ReportFailure_GetLastError<3>(a1, a2, v2, v3, v4, retaddr);
}

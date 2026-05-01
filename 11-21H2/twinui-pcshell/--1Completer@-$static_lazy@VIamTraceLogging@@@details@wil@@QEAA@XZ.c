/*
 * XREFs of ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x1802E02B4
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1802DD5E8 (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x1802E5780 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?Create@IamTraceLogging@@IEAAXXZ @ 0x1802E2104 (-Create@IamTraceLogging@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<IamTraceLogging>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    IamTraceLogging::Create((IamTraceLogging *)&(*a1)[1]);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}

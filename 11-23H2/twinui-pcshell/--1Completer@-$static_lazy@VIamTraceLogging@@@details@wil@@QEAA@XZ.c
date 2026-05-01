/*
 * XREFs of ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x180396E64
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1803948DC (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x18039D510 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?Create@IamTraceLogging@@IEAAXXZ @ 0x180398660 (-Create@IamTraceLogging@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<IamTraceLogging>::Completer::~Completer(_DWORD *a1)
{
  if ( !a1[2] )
    IamTraceLogging::Create((IamTraceLogging *)(*(_QWORD *)a1 + 8LL));
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}

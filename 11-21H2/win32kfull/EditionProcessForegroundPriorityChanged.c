/*
 * XREFs of EditionProcessForegroundPriorityChanged @ 0x1C00F51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionProcessForegroundPriorityChanged(PEPROCESS *a1, int a2)
{
  HANDLE ProcessId; // rax

  if ( a2 && (unsigned int)RtlGetActiveConsoleId() == gSessionId )
  {
    ProcessId = PsGetProcessId(*a1);
    RtlSetConsoleSessionForegroundProcessId(ProcessId);
  }
  return GreDxgkSetProcessStatus(a1, 1LL);
}

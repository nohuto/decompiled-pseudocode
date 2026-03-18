/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01E61E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01E6208 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  if ( !(unsigned int)UserIsDisconnectConnection(a1) )
    InputTraceLogging::Cursor::SetCursorSuppression();
}

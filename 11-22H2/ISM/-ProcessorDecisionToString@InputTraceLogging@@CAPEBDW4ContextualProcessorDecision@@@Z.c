/*
 * XREFs of ?ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z @ 0x18017DB94
 * Callers:
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x1800749F0 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x1801CDA7C (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ProcessorDecisionToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Ignore";
  v1 = a1 - 1;
  if ( !v1 )
    return "Buffer";
  v2 = v1 - 1;
  if ( !v2 )
    return "Send";
  v3 = v2 - 1;
  if ( !v3 )
    return "Drop";
  if ( v3 == 1 )
    return "Listen";
  return "UNKNOWN";
}

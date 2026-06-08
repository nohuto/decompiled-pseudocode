/*
 * XREFs of ProcLibRegisterEtw @ 0x1C00489B8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0026380 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

NTSTATUS ProcLibRegisterEtw()
{
  NTSTATUS result; // eax

  result = EtwRegister(
             &PPM_ETW_PROVIDER,
             (PETWENABLECALLBACK)ProcLibTraceControlCallback,
             0LL,
             (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( result >= 0 )
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
    result = 0;
    ProcLibEtwRegistered = 1;
  }
  return result;
}

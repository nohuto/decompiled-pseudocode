/*
 * XREFs of EvtDriverUnload @ 0x1C00232C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS EvtDriverUnload()
{
  REGHANDLE v0; // rcx
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C00120F8 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink);
    ProcLibEtwRegistered = 0;
  }
  if ( WPP_MAIN_CB.Reserved )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Reserved = 0LL;
  }
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 0;
  return result;
}

/*
 * XREFs of EvtDriverUnload @ 0x1C0035F30
 * Callers:
 *     DriverEntry @ 0x1C0047770 (DriverEntry.c)
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
    dword_1C0015038 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}

/*
 * XREFs of EvtDriverUnload @ 0x1C00370D0
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x1C00250AC (wil_UninitializeFeatureStaging.c)
 */

__int64 EvtDriverUnload()
{
  REGHANDLE v0; // rcx

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C0016038 = 0;
    EtwUnregister(v0);
    EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink);
    ProcLibEtwRegistered = 0;
  }
  return wil_UninitializeFeatureStaging();
}

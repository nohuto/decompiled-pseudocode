/*
 * XREFs of RtlGetActiveConsoleId @ 0x14035E670
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140599180 (PopPowerButtonWorkCallback.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1407D3BD0 (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v2; // rax

  if ( !PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v2 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v2 = &PspHostSiloGlobals;
  return *(_DWORD *)(v2[165] + 4LL);
}

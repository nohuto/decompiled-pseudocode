/*
 * XREFs of RtlGetActiveConsoleId @ 0x14035EE60
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405995E0 (PopPowerButtonWorkCallback.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1407D3920 (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3A14 (PopNotifyConsoleUserPresent.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
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

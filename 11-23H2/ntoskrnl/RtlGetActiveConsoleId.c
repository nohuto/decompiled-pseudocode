/*
 * XREFs of RtlGetActiveConsoleId @ 0x14035ECC0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405990F0 (PopPowerButtonWorkCallback.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1407D3650 (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3744 (PopNotifyConsoleUserPresent.c)
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 */

__int64 RtlGetActiveConsoleId()
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
  return *(unsigned int *)(v2[165] + 4LL);
}

/*
 * XREFs of WakeRIT @ 0x1C00A4548
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 *     EditionDeactivateMitInput @ 0x1C00A4240 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00A43A0 (WakeRITForShutdown.c)
 *     EditionActivateMitInput @ 0x1C00A4400 (EditionActivateMitInput.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00A44C0 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C01AC7C0 (WakeRITForConfigSwitch.c)
 *     EditionIVSyncForeground @ 0x1C01AE4C0 (EditionIVSyncForeground.c)
 *     _EnableSessionForMMCSS @ 0x1C01E3780 (_EnableSessionForMMCSS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.SystemArgument1, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}

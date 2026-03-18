/*
 * XREFs of HUBDSM_ConfiguredSuspended @ 0x1C001F400
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x1C0019754 (HUBPDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBDSM_ConfiguredSuspended(__int64 a1)
{
  HUBPDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

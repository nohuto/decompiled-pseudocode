/*
 * XREFs of HUBHSM_WaitingForD0Entry @ 0x1C0008CE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000D1B4 (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_WaitingForD0Entry(__int64 a1)
{
  HUBFDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

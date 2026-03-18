/*
 * XREFs of PfTAccessTracingCheck @ 0x14035E848
 * Callers:
 *     PfpLogScenarioEvent @ 0x1407D4068 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A9FF34 (PfPowerActionNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) & 1;
}

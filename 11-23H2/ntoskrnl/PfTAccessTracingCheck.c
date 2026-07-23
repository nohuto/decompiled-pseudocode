/*
 * XREFs of PfTAccessTracingCheck @ 0x14035F038
 * Callers:
 *     PfpLogScenarioEvent @ 0x1407D3DB8 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) & 1;
}

/*
 * XREFs of PfTAccessTracingCheck @ 0x14035EE98
 * Callers:
 *     PfpLogScenarioEvent @ 0x1407D3AE8 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) & 1;
}

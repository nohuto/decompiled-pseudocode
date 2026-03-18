/*
 * XREFs of HalpInitSystemPhase0 @ 0x140B76E14
 * Callers:
 *     HalInitSystem @ 0x140A8BDB0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A8C358 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}

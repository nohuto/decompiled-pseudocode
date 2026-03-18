/*
 * XREFs of HalpInitSystemPhase0 @ 0x140B75E84
 * Callers:
 *     HalInitSystem @ 0x140A8B550 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A8BAF8 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}

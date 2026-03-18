/*
 * XREFs of HalAllProcessorsStarted @ 0x140B75DC0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A8BAF8 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL) >= 0;
}

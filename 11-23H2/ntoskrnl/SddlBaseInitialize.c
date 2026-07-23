/*
 * XREFs of SddlBaseInitialize @ 0x140388654
 * Callers:
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140823330 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}

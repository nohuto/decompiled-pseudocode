/*
 * XREFs of SddlBaseInitialize @ 0x140388474
 * Callers:
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140823030 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}

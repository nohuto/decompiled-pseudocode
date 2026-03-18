/*
 * XREFs of MiShouldYieldProcessor @ 0x14059109C
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 */

LOGICAL MiShouldYieldProcessor()
{
  return KeShouldYieldProcessor();
}

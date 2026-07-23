/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14037760C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89238 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}

/*
 * XREFs of KiIsKvaShadowDisabled @ 0x140377480
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89238 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

/*
 * XREFs of KiIsKvaShadowDisabled @ 0x140377AD0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89A8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

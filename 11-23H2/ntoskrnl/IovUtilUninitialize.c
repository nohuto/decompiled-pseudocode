/*
 * XREFs of IovUtilUninitialize @ 0x140AD2E20
 * Callers:
 *     ViIovPluginUnload @ 0x1405D2450 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}

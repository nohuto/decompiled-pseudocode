/*
 * XREFs of ?IsPenMenuSystemTrayManagerEnabled@@YA_NXZ @ 0x18008AE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsPenMenuSystemTrayManagerEnabled(void)
{
  return IsComponentEnabledInProfile(&CLSID_PenMenuSystemTrayManager);
}

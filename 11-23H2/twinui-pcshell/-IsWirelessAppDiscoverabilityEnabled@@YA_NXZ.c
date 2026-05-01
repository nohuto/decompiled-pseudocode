/*
 * XREFs of ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1801BF080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsWirelessAppDiscoverabilityEnabled(void)
{
  return IsComponentEnabledInProfile((GUID *)&stru_18081CD18);
}

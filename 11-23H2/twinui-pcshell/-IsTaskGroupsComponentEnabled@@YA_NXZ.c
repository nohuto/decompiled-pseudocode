/*
 * XREFs of ?IsTaskGroupsComponentEnabled@@YA_NXZ @ 0x18014F150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsTaskGroupsComponentEnabled(void)
{
  return IsComponentEnabledInProfile((GUID *)&stru_18081A3E0);
}

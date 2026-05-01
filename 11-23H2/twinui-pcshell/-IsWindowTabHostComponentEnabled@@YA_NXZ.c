/*
 * XREFs of ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x18014F110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180154F58 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 */

bool IsWindowTabHostComponentEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsWindowTabHostEnabledOnSKU() )
    return IsComponentEnabledInProfile((GUID *)&stru_18081A3D0);
  return v0;
}

/*
 * XREFs of ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1801511C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsNPSMDesktopShellComponentEnabled(void)
{
  return IsComponentEnabledInProfile((GUID *)&stru_18081A4C8);
}

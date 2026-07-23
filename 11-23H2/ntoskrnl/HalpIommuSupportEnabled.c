/*
 * XREFs of HalpIommuSupportEnabled @ 0x1403AEC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy <= 1 || HalpIommuPolicy == 3;
}

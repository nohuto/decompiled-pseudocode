/*
 * XREFs of HalpIommuCheckDpptException @ 0x1403916D4
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140518CF0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140829348 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}

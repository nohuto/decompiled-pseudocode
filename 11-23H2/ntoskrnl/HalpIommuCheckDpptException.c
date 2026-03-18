/*
 * XREFs of HalpIommuCheckDpptException @ 0x1403914F4
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1405187A0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}

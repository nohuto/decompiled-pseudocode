/*
 * XREFs of IsUserSidAssignedAccessSingleAppClassicApp @ 0x18010651C
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x180148AF0 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1805F41DC (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 * Callees:
 *     GetAssignedAccessTypeForUser @ 0x18010778C (GetAssignedAccessTypeForUser.c)
 */

_BOOL8 __fastcall IsUserSidAssignedAccessSingleAppClassicApp(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return (unsigned int)GetAssignedAccessTypeForUser(a1, a2) == 3;
}

/*
 * XREFs of ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002A1C0
 * Callers:
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180029BC8 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180029FCC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E0E8 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpImportanceToRequiredExecutionSpeed(char a1)
{
  if ( (a1 & 0xC0) == 0xC0 )
    return 2LL;
  return (a1 & 0xEu) >= 8 && (a1 & 0x30u) >= 0x20;
}

/*
 * XREFs of memmove_0 @ 0x1800534AE
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     SdbGetDatabaseID @ 0x18008FE28 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x1800911E8 (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095090 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x1800967B8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x18009BCBC (AslpFileGetVersionBlock.c)
 *     AslPathClean @ 0x18009D408 (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x18009E24C (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

/*
 * XREFs of memmove_0 @ 0x18005022E
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180035210 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180038390 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     SdbGetDatabaseID @ 0x180095224 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x1800963E8 (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x18009A330 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x1800A1620 (AslpFileGetVersionBlock.c)
 *     AslPathClean @ 0x1800A3B30 (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

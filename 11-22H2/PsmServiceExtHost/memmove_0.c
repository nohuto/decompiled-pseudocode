/*
 * XREFs of memmove_0 @ 0x1800536EE
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     SdbGetDatabaseID @ 0x180090188 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x180091548 (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1800953F0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x180096B18 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x180096F58 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x18009C01C (AslpFileGetVersionBlock.c)
 *     AslPathClean @ 0x18009D768 (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180034040 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800340FC (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCfgCheckRoutineCallback @ 0x180034200 (LdrpCfgCheckRoutineCallback.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180034270 (LdrpCfgDispatchRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 *     LdrResolveDelayLoadedAPI @ 0x180035FF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     RtlValidateUserCallTarget @ 0x18010A264 (RtlValidateUserCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  int v0; // eax

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  return v0 && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}

/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044CC (LdrpDoPostSnapWork.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002C060 (LdrResolveDelayLoadedAPI.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x18002D9B0 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrpCfgCheckRoutineCallback @ 0x18002D9E0 (LdrpCfgCheckRoutineCallback.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC84 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlValidateUserCallTarget @ 0x18010A424 (RtlValidateUserCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

bool LdrControlFlowGuardEnforcedWithExportSuppression()
{
  bool result; // al

  result = 0;
  if ( LdrSystemDllInitBlock.CfgBitMap )
  {
    if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      return (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
  }
  return result;
}

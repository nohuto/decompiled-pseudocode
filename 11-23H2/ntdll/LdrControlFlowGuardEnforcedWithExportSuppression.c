/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002BE90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x18002D7E0 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrpCfgCheckRoutineCallback @ 0x18002D810 (LdrpCfgCheckRoutineCallback.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     RtlValidateUserCallTarget @ 0x18010B8C4 (RtlValidateUserCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB50 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

bool LdrControlFlowGuardEnforcedWithExportSuppression()
{
  bool result; // al

  result = 0;
  if ( qword_18019C3C8 )
  {
    if ( (dword_18019C3AC & 1) == 0 )
      return (BYTE5(qword_18019C3B0) & 3) == 3;
  }
  return result;
}

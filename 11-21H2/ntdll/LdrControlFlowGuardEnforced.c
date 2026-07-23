/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x1800342E0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x180032BD0 (RtlGuardCheckExceptionHandler.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x180034238 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180088BC0 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     RtlGrowFunctionTable @ 0x1800EBD50 (RtlGrowFunctionTable.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A1C0 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  BOOLEAN result; // al

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0;
  result = 1;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 )
    return 0;
  return result;
}

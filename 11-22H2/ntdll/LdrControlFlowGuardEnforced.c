/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x18002C570
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022A3C (LdrpResolveProcedureAddress.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C538 (LdrControlFlowGuardXfgEnabled.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180071CC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardCheckImageBase @ 0x180073DA8 (RtlGuardCheckImageBase.c)
 *     RtlpCallVectoredHandlers @ 0x1800779F8 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082860 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x1800854A0 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x18008C490 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     RtlAddFunctionTable @ 0x1800EB1E0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EB500 (RtlGrowFunctionTable.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A380 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlRemoteCall @ 0x18010BE80 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  return LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0;
}

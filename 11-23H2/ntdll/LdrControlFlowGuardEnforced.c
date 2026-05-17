/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x18002C3A0
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B8E4 (LdrpCfgProcessLoadConfig.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C368 (LdrControlFlowGuardXfgEnabled.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardCheckImageBase @ 0x180074418 (RtlGuardCheckImageBase.c)
 *     RtlpCallVectoredHandlers @ 0x180078068 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085CA0 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x18008CC90 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC830 (RtlGrowFunctionTable.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B820 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlRemoteCall @ 0x18010D320 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforced()
{
  return qword_18019C3C8 && (dword_18019C3AC & 1) == 0;
}

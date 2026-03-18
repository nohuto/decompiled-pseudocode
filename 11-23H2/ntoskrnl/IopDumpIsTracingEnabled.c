/*
 * XREFs of IopDumpIsTracingEnabled @ 0x140552848
 * Callers:
 *     IopDumpTraceCrashDumpDisabled @ 0x14055286C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140552948 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140552A58 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140552B68 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140552C78 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140552D88 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140552E98 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140552FA8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitializeDumpPolicySettings @ 0x140861344 (IopInitializeDumpPolicySettings.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140943AA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140943D9C (IopDumpTraceForceDumpDisabled.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x140943E9C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}

/*
 * XREFs of IopDumpIsTracingEnabled @ 0x140554630
 * Callers:
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x1409335E0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1409338DC (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled;
}

/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x140569B58
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x14057A3AC (KeRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140428E80 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
    return DebugService2();
  return result;
}

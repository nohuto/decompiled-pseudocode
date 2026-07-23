/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x14056A218
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x14057A89C (KeRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140429210 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
    return DebugService2();
  return result;
}

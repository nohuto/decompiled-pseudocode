/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1407511A0
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14074D3F8 (CmpDoFileSetSizeEx.c)
 *     HvWriteLogFile @ 0x140750D94 (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140750EFC (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x1407DE7D4 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14080028C (HvpPerformLogFileRecovery.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D658 (HvRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 != 1 )
    return a1 != 4;
  return result;
}

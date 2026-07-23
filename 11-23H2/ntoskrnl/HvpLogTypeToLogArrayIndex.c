/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140751390
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14074D5E8 (CmpDoFileSetSizeEx.c)
 *     HvWriteLogFile @ 0x140750F84 (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407510EC (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x1407DEAA4 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14080055C (HvpPerformLogFileRecovery.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D908 (HvRecoverFlushProtocolStateFromFiles.c)
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

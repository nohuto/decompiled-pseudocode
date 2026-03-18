/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1407516B0
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14074D908 (CmpDoFileSetSizeEx.c)
 *     HvWriteLogFile @ 0x1407512A4 (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14075140C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x1407DED54 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14080093C (HvpPerformLogFileRecovery.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D708 (HvRecoverFlushProtocolStateFromFiles.c)
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

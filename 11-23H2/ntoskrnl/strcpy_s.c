/*
 * XREFs of strcpy_s @ 0x1403DFA70
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408068D8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140807C68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080CBEC (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x1409BEFD0 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140AEA690 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140AEB4A8 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v5 = a1 - Src;
      while ( 1 )
      {
        v6 = *Src;
        Src[v5] = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}

/*
 * XREFs of rimProcessCompleteFrame @ 0x1C01A9900
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00E6BB8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00E6CDC (rimDispatchCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C01A9AEC (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(HANDLE *a1, LARGE_INTEGER *a2, unsigned int *a3)
{
  DWORD LowPart; // eax
  NTSTATUS result; // eax

  if ( (a2[23].LowPart & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (a1[108] || *((_DWORD *)a1 + 272))
    && (LowPart = a2[23].LowPart, (LowPart & 0x2000) != 0)
    && (LowPart & 0x80000) != 0
    && (LowPart & 0x1000000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    result = a2[23].LowPart;
    if ( (result & 0x400000) == 0 )
    {
      a2[23].LowPart = result | 0x400000;
      return ZwSetEvent(a1[43], 0LL);
    }
  }
  else if ( *((_BYTE *)a1 + 808) )
  {
    *((_BYTE *)a1 + 808) = 0;
    InputTraceLogging::RIM::DispatchFrame((__int64)a2);
    return rimDispatchCompleteFrames((struct RawInputManagerObject *)a1, a2, (__int64)a3, (unsigned __int64)a3, *a3).LowPart;
  }
  else
  {
    return rimQueueCompleteFrame(a1, a2, a3);
  }
  return result;
}

/*
 * XREFs of ?SetPointerRawDataListFrameId@CTouchProcessor@@AEAAXKPEAUCPointerRawData@@@Z @ 0x1C01D6AD8
 * Callers:
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00E3E00 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerRawDataListFrameId(
        struct _KTHREAD **this,
        int a2,
        struct CPointerRawData *a3)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7810);
  while ( a3 )
  {
    if ( *(_DWORD *)a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7815);
    *(_DWORD *)a3 = a2;
    a3 = (struct CPointerRawData *)*((_QWORD *)a3 + 3);
  }
}

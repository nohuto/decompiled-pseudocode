/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C00E4810
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0089C90 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsLastMsgData(CTouchProcessor *this, unsigned __int64 a2)
{
  unsigned int v3; // edi
  struct CPointerMsgData *NonConstMsgData; // rsi
  _QWORD *v5; // rbx

  v3 = 0;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12633);
  v5 = *(_QWORD **)NonConstMsgData;
  if ( *(_QWORD *)NonConstMsgData != *((_QWORD *)NonConstMsgData + 1) )
    return 0LL;
  if ( (struct CPointerMsgData *)*v5 != NonConstMsgData )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12653);
  if ( (struct CPointerMsgData *)v5[1] != NonConstMsgData )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12654);
  if ( *((_WORD *)v5 - 112) != *((_WORD *)NonConstMsgData + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12660);
  if ( *((_DWORD *)v5 - 50) == 3 && !*((_DWORD *)v5 - 55) )
    return 1;
  return v3;
}

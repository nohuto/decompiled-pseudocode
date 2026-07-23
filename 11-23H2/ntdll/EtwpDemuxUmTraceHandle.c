/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x180125560
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800020DC (EtwpGetUmProcessImageInfo.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18005C500 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x18005F3F4 (EtwpGetPrivateLoggerContext.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800826C8 (EtwpShutdownPrivateLoggers.c)
 *     EtwpIsPrivateLoggerOn @ 0x18008615C (EtwpIsPrivateLoggerOn.c)
 *     EtwpTraceUmMessage @ 0x18008EA64 (EtwpTraceUmMessage.c)
 *     EtwpTraceUmEvent @ 0x180125BB4 (EtwpTraceUmEvent.c)
 * Callees:
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 544) )
      goto LABEL_9;
    v7 = *(unsigned __int16 *)(v6 + 552);
    if ( !(_WORD)v7 )
    {
      if ( NtTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 544), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_9;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 552) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_9:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8));
  return 0LL;
}

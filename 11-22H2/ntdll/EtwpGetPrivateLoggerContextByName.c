/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x18005F500
 * Callers:
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180062284 (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180029E40 (RtlEqualUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x1801240E0 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !String2 )
    return 4201LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4 & 0xFFFF7FFF;
    v9 = v4 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
      break;
LABEL_4:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( v5 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(v4, &v9) )
      goto LABEL_4;
    v5 = v9;
  }
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
  v7 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
  if ( (v7 & 1) != 0 )
  {
    v8 = v9;
LABEL_9:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v8 + 8));
    goto LABEL_4;
  }
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v7 + 136), String2, 1u) )
  {
    v8 = v4;
    goto LABEL_9;
  }
  *a2 = v7;
  return 0LL;
}

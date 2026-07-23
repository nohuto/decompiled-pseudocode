/*
 * XREFs of EtwpFlushUmLogger @ 0x180062150
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18005EA20 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005F480 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpQueryUmLogger @ 0x180062018 (EtwpQueryUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180062234 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180062284 (EtwpGetPrivateLoggerContext.c)
 *     EtwpBufferingModeFlush @ 0x180123F00 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 176;
  v11 = 0LL;
  if ( a1 < 0xB0 )
    return 234LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  result = EtwpGetPrivateLoggerContext(a4, &v11);
  if ( !(_DWORD)result )
  {
    v9 = v11;
    if ( (*(_DWORD *)(v11 + 308) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v10 = 2;
        goto LABEL_6;
      }
      v10 = EtwpAddInstanceIdToLogFileName(a4, *(_DWORD *)(a4 + 96), (_UNICODE_STRING *)(v11 + 152));
      if ( v10 )
        goto LABEL_6;
      v10 = EtwpBufferingModeFlush(v9);
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 152));
    }
    else
    {
      v10 = EtwpSynchronizeWithLogger(v11, 2LL);
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
LABEL_6:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
    return v10;
  }
  return result;
}

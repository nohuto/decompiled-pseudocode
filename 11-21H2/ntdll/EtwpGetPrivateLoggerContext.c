/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x180007EC0
 * Callers:
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180007D88 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x180090EE4 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1801226D4 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 * Callees:
 *     EtwpGetPrivateLoggerContextByName @ 0x180006E08 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName(&DestinationString, a2);
  }
  v3 = *(unsigned __int16 *)(a1 + 8);
  v4 = EtwpLoggerArray;
  v5 = v3 & 0xFFFF7FFF;
  v9 = v3 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v5 < 0x40 )
  {
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16LL * v5 + 8));
    v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
    if ( (v6 & 1) == 0 )
    {
      *a2 = v6;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
    return 4201LL;
  }
  result = EtwpDemuxUmTraceHandle(v3, &v9);
  if ( !(_DWORD)result )
  {
    v5 = v9;
    v4 = EtwpLoggerArray;
    goto LABEL_4;
  }
  return result;
}

/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x18005F3F4
 * Callers:
 *     EtwpQueryUmLogger @ 0x18005F188 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18005F2C0 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012588C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180125F44 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18005C500 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
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
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v9 + 8));
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

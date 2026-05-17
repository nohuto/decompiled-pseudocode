/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x180006E08
 * Callers:
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180007EC0 (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !a1 )
    return 4201LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 & 0xFFFF7FFF;
    v10 = v5 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
      break;
LABEL_4:
    if ( ++v5 >= 0x40 )
      return 4201LL;
  }
  if ( v6 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(v5, &v10) )
      goto LABEL_4;
    v6 = v10;
  }
  v8 = 2LL * v6;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
  v9 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
  if ( (v9 & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v8 + 8));
    goto LABEL_4;
  }
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v9 + 136, a1, a3) )
  {
    v8 = 2LL * v5;
    goto LABEL_8;
  }
  *a2 = v9;
  return 0LL;
}

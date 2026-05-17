/*
 * XREFs of EtwpShutdownPrivateLoggers @ 0x180085D68
 * Callers:
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 * Callees:
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 */

void EtwpShutdownPrivateLoggers()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6[4]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v7[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[0]) = 176;
    v0 = 0;
    v1 = 0LL;
    HIDWORD(v7[5]) = 0x20000;
    while ( 1 )
    {
      v2 = v0 & 0xFFFF7FFF;
      v6[0] = v0 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v2 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)EtwpDemuxUmTraceHandle(v0, v6) )
          break;
      }
LABEL_7:
      ++v0;
      ++v1;
      if ( v0 >= 0x40 )
        return;
    }
    v2 = v6[0];
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
    v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
    if ( (v3 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
    }
    else
    {
      v4 = *(unsigned int *)(v3 + 308);
      v5 = 2LL * *(unsigned int *)(v3 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
      if ( (v4 & 0x400) == 0 )
      {
        v7[1] = v1;
        EtwpStopUmLogger(v5, v4, v3, (__int64)v7);
      }
    }
    goto LABEL_7;
  }
}

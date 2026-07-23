/*
 * XREFs of EtwpIsPrivateLoggerOn @ 0x18008615C
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
 */

bool __fastcall EtwpIsPrivateLoggerOn(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // rdx
  bool result; // al
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = EtwpLoggerArray;
  v2 = a1 & 0xFFFF7FFF;
  v5 = a1 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 0;
  if ( v2 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(a1, &v5) )
      return 0;
    v2 = v5;
    v1 = EtwpLoggerArray;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16LL * v2 + 8));
  v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
  if ( (v3 & 1) == 0 )
  {
    result = *(_DWORD *)(v3 + 312) != 0;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
    return result;
  }
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
  return 0;
}

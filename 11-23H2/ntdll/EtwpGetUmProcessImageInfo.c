/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x1800020DC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180032238 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800851C8 (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x180002184 (EtwpProviderArrivalCallback.c)
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = EtwpLoggerArray;
  v3 = 0;
  v5 = a1 & 0x7FFF;
  v10 = v5;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v5 >= 0x40 )
  {
    result = EtwpDemuxUmTraceHandle(a1, &v10);
    if ( (_DWORD)result )
      return result;
    v5 = v10;
    v2 = EtwpLoggerArray;
  }
  v6 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v5 + 8));
  v7 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
  if ( (v7 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v10 + 8));
    return 4201LL;
  }
  v8 = *(_DWORD *)(v7 + 308);
  if ( (v8 & 0x800) != 0 && (v8 & 0x10000) == 0 )
    v3 = EtwpProviderArrivalCallback(*(_QWORD *)(EtwpLoggerArray + 8 * v6), a2);
  result = v3;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v7 + 20) + 8));
  return result;
}

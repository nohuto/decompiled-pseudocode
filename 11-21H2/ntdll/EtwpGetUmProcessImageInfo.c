/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x180122610
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180016194 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpTrackRegBinaryInfo @ 0x180088A1C (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 *     EtwpProviderArrivalCallback @ 0x180123318 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
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
  v7 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v5 + 8));
  v8 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
  if ( (v8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
    return 4201LL;
  }
  v9 = *(_DWORD *)(v8 + 308);
  if ( (v9 & 0x800) != 0 && (v9 & 0x10000) == 0 )
    v3 = EtwpProviderArrivalCallback(*(_QWORD *)(EtwpLoggerArray + 8 * v7), a2);
  result = v3;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v8 + 20) + 8));
  return result;
}

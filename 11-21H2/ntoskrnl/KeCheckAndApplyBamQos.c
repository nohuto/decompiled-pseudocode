/*
 * XREFs of KeCheckAndApplyBamQos @ 0x14045AAC0
 * Callers:
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KeApplyWobBamQos @ 0x14030F970 (KeApplyWobBamQos.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KeUpdatePendingQosRequest @ 0x14045ABA8 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14045E06E (PoSetProcessorQoS.c)
 */

__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // ebx
  __int16 v7; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( KeHeteroSystemQos )
  {
    _disable();
    v4 = (unsigned __int8)*(_DWORD *)(a2 + 512);
    result = (unsigned __int8)*(_DWORD *)(a1 + 236);
    if ( v4 != (_DWORD)result )
    {
      v5 = *(_DWORD *)(a1 + 236) & 0x300;
      if ( (unsigned __int8)PoSetProcessorQoS(a1, (unsigned __int8)*(_DWORD *)(a2 + 512)) )
        v6 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF;
      else
        v6 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF | ((v4 & 3) << 8);
      *(_DWORD *)(a1 + 236) = v6;
      result = v5 != 0;
      if ( (_DWORD)result != ((v6 & 0x300) != 0) )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v7 & 0x200) != 0 )
      _enable();
  }
  return result;
}

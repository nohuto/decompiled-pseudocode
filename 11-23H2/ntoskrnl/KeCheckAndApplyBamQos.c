/*
 * XREFs of KeCheckAndApplyBamQos @ 0x140461770
 * Callers:
 *     KeApplyWobBamQos @ 0x14025A000 (KeApplyWobBamQos.c)
 *     KiUpdateRunTime @ 0x1402C7770 (KiUpdateRunTime.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     SwapContext @ 0x140428750 (SwapContext.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x140463260 (PoSetProcessorQoS.c)
 */

__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *SchedulerAssist; // r8
  unsigned int *v5; // rdi
  __int64 v6; // rdx
  int v7; // ebp
  char v8; // al
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v12; // r8
  int v13; // ett
  __int16 v14; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( KeHeteroSystemQos )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v5 = (unsigned int *)(a1 + 236);
    result = (unsigned __int8)*(_DWORD *)(a1 + 236);
    v6 = (unsigned __int8)*(_DWORD *)(a2 + 512);
    if ( (_DWORD)v6 != (_DWORD)result )
    {
      v7 = *(_DWORD *)(a1 + 236) & 0x300;
      v8 = PoSetProcessorQoS(a1, v6, SchedulerAssist);
      v9 = *v5;
      v10 = v8 ? v9 & 0xFFFFFCFF : v9 & 0xFFFFFCFF | 0x100;
      *v5 = v10;
      result = v7 != 0;
      if ( (_DWORD)result != ((v10 & 0x300) != 0) )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v14 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        _m_prefetchw(v12);
        LODWORD(result) = *v12;
        do
        {
          v13 = result;
          result = (unsigned int)_InterlockedCompareExchange(v12, result & 0xFFDFFFFF, result);
        }
        while ( v13 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}

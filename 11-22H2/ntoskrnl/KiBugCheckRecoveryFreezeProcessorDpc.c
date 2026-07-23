/*
 * XREFs of KiBugCheckRecoveryFreezeProcessorDpc @ 0x14057AA80
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void KiBugCheckRecoveryFreezeProcessorDpc()
{
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v2; // r9
  __int64 v3; // rdx
  unsigned __int8 v4; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  struct _KPRCB *v9; // rcx
  signed __int32 *v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int16 v13; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v3) = 0x8000;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v2[5] |= v3;
  }
  _InterlockedIncrement(&KiFreezeInDpcCount);
  while ( KiFreezeInDpc )
    _mm_pause();
  if ( (_DWORD)KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (v13 & 0x200) != 0 )
  {
    v9 = KeGetCurrentPrcb();
    v10 = (signed __int32 *)v9->SchedulerAssist;
    if ( v10 )
    {
      _m_prefetchw(v10);
      v11 = *v10;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v10, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    _enable();
  }
}

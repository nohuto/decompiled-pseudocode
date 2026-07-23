/*
 * XREFs of KxReenterRetpolinedCode @ 0x140573E54
 * Callers:
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 *     KeReenterRetpolinedCode @ 0x140410160 (KeReenterRetpolinedCode.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void KxReenterRetpolinedCode()
{
  volatile signed __int32 *SchedulerAssist; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v2; // rcx
  signed __int32 *v3; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int16 v6; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->BpbRetpolineState &= ~1u;
  if ( (v6 & 0x200) != 0 )
  {
    v2 = KeGetCurrentPrcb();
    v3 = (signed __int32 *)v2->SchedulerAssist;
    if ( v3 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange(v3, v4 & 0xFFDFFFFF, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v2);
    }
    _enable();
  }
}

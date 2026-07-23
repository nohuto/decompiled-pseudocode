/*
 * XREFs of KiAcquireReleaseDpcData @ 0x14057C568
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14031EEF0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiAcquireReleaseDpcData(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int16 v2; // bx
  volatile signed __int32 *SchedulerAssist; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8[8]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+20h] [rbp-8h]

  _InterlockedOr(v8, 0);
  v1 = (volatile signed __int64 *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = v9;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
    KxReleaseSpinLock(v1);
    if ( (v2 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v5 )
      {
        _m_prefetchw(v5);
        v6 = *v5;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(v5, v6 & 0xFFDFFFFF, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
}

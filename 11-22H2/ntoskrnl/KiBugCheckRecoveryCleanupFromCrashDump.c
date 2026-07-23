/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x14057A738
 * Callers:
 *     KiCaptureDumpPostRecovery @ 0x14057AD20 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x14020D230 (KiSendThawExecution.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HvlResumeFromRootCrashdump @ 0x140545584 (HvlResumeFromRootCrashdump.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057B908 (KiUpdateBugcheckRecoveryProgress.c)
 */

void __fastcall KiBugCheckRecoveryCleanupFromCrashDump(unsigned __int8 a1, char a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // rcx
  signed __int32 *v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  v4 = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) != 0 && v4 < 3 )
  {
    if ( v4 == 2 )
    {
      HvlResumeFromRootCrashdump(1);
      v16 = 0LL;
      v14 = 1LL;
      v15 = 99;
      KiUpdateBugcheckRecoveryProgress(&v14);
    }
    KiSendThawExecution(1);
    off_140C01CC8[0]();
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
    if ( a2 )
    {
      v10 = KeGetCurrentPrcb();
      v11 = (signed __int32 *)v10->SchedulerAssist;
      if ( v11 )
      {
        _m_prefetchw(v11);
        v12 = *v11;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(v11, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      _enable();
    }
  }
}

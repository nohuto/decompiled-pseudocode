/*
 * XREFs of KeSetPriorityBoost @ 0x140307860
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     FsRtlpDoBoost @ 0x140358738 (FsRtlpDoBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x1403079D8 (KiSetPriorityBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetPriorityBoost(__int64 a1, int a2)
{
  void *v2; // rax
  char v5; // r12
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v8; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v18 = 0LL;
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v10) = 4;
      if ( CurrentIrql != 2 )
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= a2 )
      goto LABEL_31;
    v8 = *(_QWORD *)(a1 + 72);
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < a2 )
    {
      v5 = 1;
      KiSetPriorityBoost((unsigned int)&v18, a1, (_BYTE)a2, v8, KiLockQuantumTarget);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v5 )
    {
      LOBYTE(v2) = KiProcessDeferredReadyList((__int64)CurrentPrcb, &v18, CurrentIrql);
    }
    else
    {
LABEL_31:
      if ( (_DWORD)KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return (char)v2;
}

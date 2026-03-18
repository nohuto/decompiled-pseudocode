/*
 * XREFs of KiMonitorCacheErrata @ 0x140577D00
 * Callers:
 *     <none>
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x14020E67C (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquirePrcbLock @ 0x14056AEA8 (KiTryToAcquirePrcbLock.c)
 *     MmReadProcessPageTables @ 0x1405A6AE4 (MmReadProcessPageTables.c)
 */

__int64 KiMonitorCacheErrata()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v1; // r12
  __int64 v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // r14
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  char v19; // [rsp+70h] [rbp+18h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (_DWORD *)KiCacheErrataMonitor;
  v19 = 0;
  v20 = 0;
  v2 = 16LL * CurrentPrcb->Number + KiCacheErrataMonitor + 360;
  _InterlockedExchange64((volatile __int64 *)v2, -1LL);
  *(_DWORD *)(v2 + 8) -= KiSanitizedProfileInterval;
  result = *(unsigned int *)(v2 + 8);
  if ( (int)result <= 0 )
  {
    v4 = &v1[4 * *(unsigned int *)(v2 + 12) + 90];
    if ( (volatile signed __int32 *)v2 != v4 && !_interlockedbittestandreset64(v4, CurrentPrcb->Number) )
    {
      v5 = 0LL;
      v6 = KiProcessorBlock[*(unsigned int *)(v2 + 12)];
      v7 = *(_QWORD *)(v6 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( KiTryToAcquirePrcbLock(v6, &v19) )
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( KiTryToAcquireThreadLock(v10, &v20) )
        {
          v5 = *(_QWORD *)(v10 + 184);
          if ( (_UNKNOWN *)v5 != &KiInitialProcess )
            v5 &= -(__int64)(ObReferenceObjectSafeWithTag(*(_QWORD *)(v10 + 184)) != 0);
          KiReleaseThreadLockSafe(v10);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v13 = v12[6] - 1;
            v12[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick((__int64)v11);
          }
        }
      }
      if ( v7 == *(_QWORD *)(v6 + 8) )
        MmReadProcessPageTables(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v5 )
      {
        if ( (_UNKNOWN *)v5 != &KiInitialProcess )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x61727245u);
      }
    }
    *(_DWORD *)(v2 + 8) = *v1;
    result = (*(_DWORD *)(v2 + 12) + 1) / (unsigned int)KeNumberProcessors_0;
    *(_DWORD *)(v2 + 12) = (*(_DWORD *)(v2 + 12) + 1) % (unsigned int)KeNumberProcessors_0;
  }
  return result;
}

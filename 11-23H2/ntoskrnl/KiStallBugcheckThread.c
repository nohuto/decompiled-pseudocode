/*
 * XREFs of KiStallBugcheckThread @ 0x14057BAA8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x14057B984 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     RtlRaiseException @ 0x14030D820 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void KiStallBugcheckThread()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 NestingLevel; // al
  unsigned __int8 v3; // al
  struct _KPRCB *v4; // rcx
  _DWORD *v5; // rdx
  bool v6; // zf
  struct _KPRCB *v7; // rax
  char v8; // cl
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  unsigned __int8 v12; // cl
  _DWORD *v13; // r9
  __int64 v14; // rcx
  unsigned __int8 v15; // r9
  _DWORD *v16; // r10
  int v17; // ebx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // rcx
  _DWORD *SchedulerAssist; // rdx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel )
  {
    if ( NestingLevel == 1 && CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentIrql > 2u )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v18 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v18 - 2) <= 0xDu )
          {
            v19 = KeGetCurrentPrcb();
            SchedulerAssist = v19->SchedulerAssist;
            v6 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
            SchedulerAssist[5] &= 0xFFFF0007;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
        }
        __writecr8(2uLL);
      }
      byte_140C41377 |= 4u;
      RtlRaiseException(&KiRecoverableBugcheckException);
      __debugbreak();
    }
    __fastfail(4u);
  }
  if ( CurrentIrql > 2u )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v3 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v3 - 2) <= 0xDu )
      {
        v4 = KeGetCurrentPrcb();
        v5 = v4->SchedulerAssist;
        v6 = (v5[5] & 0xFFFF0007) == 0;
        v5[5] &= 0xFFFF0007;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)v4);
      }
    }
    __writecr8(2uLL);
  }
  v7 = KeGetCurrentPrcb();
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v8 = KiProcessorIndexToNumberMappingTable[v7->Number] & 0x3F;
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[v7->Number] >> 6;
  Affinity.Mask = 1LL << v8;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( (_DWORD)KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v9 - 2) <= 0xDu )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v6 = (v11[5] & 0xFFFF0001) == 0;
      v11[5] &= 0xFFFF0001;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
  }
  __writecr8(0LL);
  byte_140C41377 |= 2u;
  KeWaitForSingleObject(&KiBugcheckBlockingEvent, Executive, 0, 0, 0LL);
  v12 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
  {
    v13 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v12 == 2 )
      LODWORD(v14) = 4;
    else
      v14 = (-1LL << (v12 + 1)) & 4;
    v13[5] |= v14;
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( CurrentIrql > 2u )
  {
    v15 = KeGetCurrentIrql();
    __writecr8(CurrentIrql);
    if ( (_DWORD)KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu )
      {
        v16 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v15 == CurrentIrql )
          v17 = 1 << CurrentIrql;
        else
          v17 = (-1LL << (v15 + 1)) & ((1LL << (CurrentIrql + 1)) - 1) & 0xFFFFFFFC;
        v16[5] |= v17;
      }
    }
  }
}

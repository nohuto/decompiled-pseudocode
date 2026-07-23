/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x140AD6620
 * Callers:
 *     ViFaultsAddAllTags @ 0x140AD6420 (ViFaultsAddAllTags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ViFaultsIsTagPresentInList @ 0x140AD6B70 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rax
  char v5; // cl
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  unsigned int v17; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      v5 = 32;
      if ( i < a2 )
        v5 = *(_BYTE *)(a1 + 2 * i);
      *((_BYTE *)&v17 + i) = v5;
    }
    Pool2 = ExAllocatePool2(64LL, 0x18uLL, 0x54466656u);
    v7 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v8 = v17;
      *(_DWORD *)(Pool2 + 16) = v17;
      v9 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v8) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v10 = (_QWORD *)qword_140C36B48;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_140C36B48 != &ViFaultTagsList )
          __fastfail(3u);
        *v7 = &ViFaultTagsList;
        v7[1] = v10;
        *v10 = v7;
        qword_140C36B48 = (__int64)v7;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v9 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

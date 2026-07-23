/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403455A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140345694 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1403457A4 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     SmFpAllocate @ 0x14046638E (SmFpAllocate.c)
 *     SmFpFree @ 0x1404664A8 (SmFpFree.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1405C0F70 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1405C0FC8 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 Context; // r15
  LONG result; // eax
  unsigned __int64 *v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 *v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 6728LL);
  v4 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 12);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v1 + 815;
    Object[1] = v1 + 812;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v7 = v1 + 818;
        while ( 1 )
        {
          v8 = KeAcquireSpinLockRaiseToDpc(v1 + 820);
          v9 = *(__int64 **)(v4 + 64);
          v10 = v8;
          if ( v9 == (__int64 *)v7 )
          {
            v11 = 0LL;
          }
          else
          {
            v11 = (__int64 *)*v7;
            *v7 = *(_QWORD *)*v7 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v11 == v9 )
            {
              *v7 = 0LL;
              *(_QWORD *)(v4 + 64) = v4 + 56;
            }
            else
            {
              *v9 = *v9 & 7 | (8 * (((unsigned __int64)*v9 >> 3) - 1));
            }
          }
          KxReleaseSpinLock((volatile signed __int64 *)v1 + 820);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v10 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v10);
          if ( !v11 )
            break;
          v17 = SmFpAllocate((PEX_SPIN_LOCK)(v3 + 2840), 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, v11, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, v11, Issue);
          SmFpFree(v3 + 2840, 3LL, v1 + 811, v17);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  return result;
}

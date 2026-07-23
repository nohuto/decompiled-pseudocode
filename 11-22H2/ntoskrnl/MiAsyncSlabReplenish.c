/*
 * XREFs of MiAsyncSlabReplenish @ 0x1402B9C54
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B8F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MiAllocateSlabPageForMdl @ 0x1406231CC (MiAllocateSlabPageForMdl.c)
 *     MiDeleteSlabAllocator @ 0x1406567E0 (MiDeleteSlabAllocator.c)
 *     MiFastReplenishWithAsync @ 0x140656918 (MiFastReplenishWithAsync.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1402B956C (ExQueueWorkItemToPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAsyncSlabReplenish(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  volatile LONG *v5; // r13
  unsigned int v6; // r15d
  BOOL v7; // esi
  unsigned __int64 v8; // r12
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v12; // rdi
  _QWORD *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  _QWORD *v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-28h]
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v30; // [rsp+42h] [rbp-1Eh]
  char v31; // [rsp+43h] [rbp-1Dh]
  int v32; // [rsp+44h] [rbp-1Ch]
  _QWORD v33[3]; // [rsp+48h] [rbp-18h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v31 = 0;
  if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x10 )
  {
    Object = 0;
    v32 = 0;
    v30 = 6;
    v33[1] = v33;
    v5 = (volatile LONG *)(a1 + 16);
    v6 = a3 & 1;
    v33[0] = v33;
    v7 = !(a3 & 1);
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
    if ( !*(_QWORD *)(a1 + 240) )
    {
      if ( (a3 & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_6;
      }
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_DWORD *)(a1 + 84);
      *(_QWORD *)(a1 + 240) = a1;
      ExQueueWorkItemToPartition((_QWORD *)(a1 + 216), 1, v10, *(_QWORD *)(v9 + 200));
    }
    if ( v7 )
    {
      v12 = a1 + 248;
      v13 = *(_QWORD **)(v12 + 8);
      if ( *v13 != v12 )
        goto LABEL_31;
      v28 = *(_QWORD **)(v12 + 8);
      v27 = v12;
      *v13 = &v27;
      *(_QWORD *)(v12 + 8) = &v27;
    }
LABEL_6:
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( !v7 )
      return v6;
    if ( KeWaitForSingleObject(&Object, WrKernel, 0, 0, a2) == 258 )
      v6 = 1;
    v19 = ExAcquireSpinLockExclusive(v5);
    v20 = v27;
    v21 = v19;
    v22 = v28;
    if ( *(__int64 **)(v27 + 8) == &v27 && (__int64 *)*v28 == &v27 )
    {
      *v28 = v27;
      *(_QWORD *)(v20 + 8) = v22;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( (_DWORD)KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v26 = v24->SchedulerAssist;
          v18 = (v25 & v26[5]) == 0;
          v26[5] &= v25;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8(v21);
      return v6;
    }
LABEL_31:
    __fastfail(3u);
  }
  return 1LL;
}

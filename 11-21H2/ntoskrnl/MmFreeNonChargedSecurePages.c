/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x14058A2D8
 * Callers:
 *     PspIumFreePartitionPages @ 0x1405E2630 (PspIumFreePartitionPages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140264ED0 (MiPartitionObjectToPartition.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR **a1, __int64 a2, ULONG_PTR *a3)
{
  int v4; // ebp
  ULONG_PTR *i; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(a2) = 1;
  v13 = 0;
  for ( i = MiPartitionObjectToPartition(a1, a2, &v13); v4; --v4 )
  {
    v6 = 48 * *a3 - 0x220000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    MiSetPfnIdentity(v6, 0);
    if ( _InterlockedDecrement64((volatile signed __int64 *)i + 54) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)i, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList(*a3, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    ++a3;
  }
  if ( v13 )
    PsDereferencePartition(i[22]);
}

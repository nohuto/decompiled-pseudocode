/*
 * XREFs of MiPurgeZeroList @ 0x14038E01C
 * Callers:
 *     MiFinishResume @ 0x14038DF70 (MiFinishResume.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiPurgeLargeZeroNodePages @ 0x14038E148 (MiPurgeLargeZeroNodePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned int v2; // ebp
  ULONG_PTR *v3; // r14
  ULONG_PTR v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  if ( *(_BYTE *)(a1 + 15589) )
  {
    MiPurgeLargeZeroNodePages();
    v2 = 0;
    if ( dword_140C5073C )
    {
      v3 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2432) + 16LL);
      do
      {
        while ( 1 )
        {
          v4 = *v3;
          if ( *v3 == 0x3FFFFFFFFFLL )
            break;
          v5 = 48 * v4 - 0x220000000000LL;
          v6 = (unsigned __int8)MiLockPageInline(v5);
          if ( v4 <= qword_140C50840
            && (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
            && !_bittest64((const signed __int64 *)(v5 + 40), 0x28u)
            && (*(_BYTE *)(v5 + 34) & 7) == 0 )
          {
            MiUnlinkFreeOrZeroedPage(v4, 0LL, 0);
            MiInsertPageInFreeOrZeroedList(v4, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v11 = (v10 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v10;
                if ( v11 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
        }
        ++v2;
        v3 += 11;
      }
      while ( v2 < dword_140C5073C );
    }
    *(_BYTE *)(a1 + 15589) = 0;
  }
}

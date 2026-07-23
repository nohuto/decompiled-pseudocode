/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1405A0640
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x14099E328 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1405A057C (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(__int64 a1, _QWORD *a2, __int128 *a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C38EF0);
  v9 = byte_140C38F70;
  v10 = v7;
  if ( byte_140C38F70 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140C39070;
  *a2 = qword_140C38F78;
  *a3 = v11;
  a3[1] = xmmword_140C39080;
  a3[2] = xmmword_140C39090;
  a3[3] = xmmword_140C390A0;
  a3[4] = xmmword_140C390B0;
  a3[5] = xmmword_140C390C0;
  a3[6] = xmmword_140C390D0;
  *a4 = *(_OWORD *)qword_140C38F90;
  a4[1] = *(_OWORD *)&qword_140C38F90[2];
  a4[2] = *(_OWORD *)&qword_140C38F90[4];
  a4[3] = *(_OWORD *)&qword_140C38F90[6];
  a4[4] = *(_OWORD *)&qword_140C38F90[8];
  a4[5] = *(_OWORD *)&qword_140C38F90[10];
  a4[6] = *(_OWORD *)&qword_140C38F90[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140C38F90[14];
  *v12 = *(_OWORD *)&qword_140C38F90[16];
  v12[1] = *(_OWORD *)&qword_140C38F90[18];
  v12[2] = *(_OWORD *)&qword_140C38F90[20];
  v12[3] = *(_OWORD *)&qword_140C38F90[22];
  v12[4] = *(_OWORD *)&qword_140C38F90[24];
  v12[5] = *(_OWORD *)&qword_140C38F90[26];
  qword_140C38F78 = 0LL;
  memset(&xmmword_140C39070, 0, 0x70uLL);
  memset(qword_140C38F90, 0, sizeof(qword_140C38F90));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38EF0);
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
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
}

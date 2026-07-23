/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1405A0AA0
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x14099E478 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1405A09DC (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

__int64 __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(__int64 a1, _QWORD *a2, __int128 *a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C38FF0);
  v9 = byte_140C39070;
  v10 = v7;
  if ( byte_140C39070 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140C39170;
  *a2 = qword_140C39078;
  *a3 = v11;
  a3[1] = xmmword_140C39180;
  a3[2] = xmmword_140C39190;
  a3[3] = xmmword_140C391A0;
  a3[4] = xmmword_140C391B0;
  a3[5] = xmmword_140C391C0;
  a3[6] = xmmword_140C391D0;
  *a4 = *(_OWORD *)qword_140C39090;
  a4[1] = *(_OWORD *)&qword_140C39090[2];
  a4[2] = *(_OWORD *)&qword_140C39090[4];
  a4[3] = *(_OWORD *)&qword_140C39090[6];
  a4[4] = *(_OWORD *)&qword_140C39090[8];
  a4[5] = *(_OWORD *)&qword_140C39090[10];
  a4[6] = *(_OWORD *)&qword_140C39090[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140C39090[14];
  *v12 = *(_OWORD *)&qword_140C39090[16];
  v12[1] = *(_OWORD *)&qword_140C39090[18];
  v12[2] = *(_OWORD *)&qword_140C39090[20];
  v12[3] = *(_OWORD *)&qword_140C39090[22];
  v12[4] = *(_OWORD *)&qword_140C39090[24];
  v12[5] = *(_OWORD *)&qword_140C39090[26];
  qword_140C39078 = 0LL;
  memset(&xmmword_140C39170, 0, 0x70uLL);
  memset(qword_140C39090, 0, sizeof(qword_140C39090));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38FF0);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v17 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  return result;
}

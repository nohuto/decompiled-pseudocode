/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1405D13F0
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140997C84 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x1409897C4 (PopIsRemoteDesktopEnabled.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v12; // zf

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x150uLL);
  byte_140C22483 = byte_140C23325;
  byte_140C22481 = dword_140C232CC == 0;
  dword_140C224AC = PopNetStandbyReason;
  byte_140C224B1 = PopNetBIRequestActive;
  dword_140C224A0 = PopEsState;
  dword_140C224A4 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C22482 = byte_140C23324;
  dword_140C22484 = v8;
  qword_140C22508 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C224B0 = IsRemoteDesktopEnabled;
  byte_140C22488 = a2;
  xmmword_140C22490 = *a3;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}

/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1405925EC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140993454 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x140980D64 (PopIsRemoteDesktopEnabled.c)
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
  byte_140C3CA23 = byte_140C3D9C5;
  byte_140C3CA21 = dword_140C3D96C == 0;
  dword_140C3CA4C = PopNetStandbyReason;
  byte_140C3CA51 = PopNetBIRequestActive;
  dword_140C3CA40 = PopEsState;
  dword_140C3CA44 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C3CA22 = byte_140C3D9C4;
  dword_140C3CA24 = v8;
  qword_140C3CAA8 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C3CA50 = IsRemoteDesktopEnabled;
  byte_140C3CA28 = a2;
  xmmword_140C3CA30 = *a3;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
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
  __writecr8(v7);
  return result;
}

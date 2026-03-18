/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1405920FC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140993254 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIsRemoteDesktopEnabled @ 0x140980B64 (PopIsRemoteDesktopEnabled.c)
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
  byte_140C3CAA3 = byte_140C3D8C5;
  byte_140C3CAA1 = dword_140C3D86C == 0;
  dword_140C3CACC = PopNetStandbyReason;
  byte_140C3CAD1 = PopNetBIRequestActive;
  dword_140C3CAC0 = PopEsState;
  dword_140C3CAC4 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C3CAA2 = byte_140C3D8C4;
  dword_140C3CAA4 = v8;
  qword_140C3CB28 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C3CAD0 = IsRemoteDesktopEnabled;
  byte_140C3CAA8 = a2;
  xmmword_140C3CAB0 = *a3;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
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

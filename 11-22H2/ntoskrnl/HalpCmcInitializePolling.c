/*
 * XREFs of HalpCmcInitializePolling @ 0x1403B3DB8
 * Callers:
 *     HalpInitializeCmc @ 0x140A8B58C (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x140380CD8 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpCmcInitializePolling(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
  if ( !HalpCmcPollingInitialized )
  {
    HalpCmcErrorPacket = (__int64)&HalpCmcReserveErrorPacket;
    HalpCmcInitializeErrorPacketContents((GUID *)&HalpCmcReserveErrorPacket);
    v3 = *(_DWORD *)(a1 + 52);
    qword_140C6A960 = (__int64)HalpCmcDeferredRoutine;
    qword_140C6A998 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140C6A908 = 8LL;
    qword_140C6A918 = (__int64)&qword_140C6A910;
    qword_140C6A910 = (__int64)&qword_140C6A910;
    dword_140C6A948 = 275;
    qword_140C6A968 = (__int64)&HalpCmcContext;
    qword_140C6A980 = 0LL;
    qword_140C6A958 = 0LL;
    qword_140C6A9A0 = (__int64)&HalpCmcContext;
    qword_140C6A988 = 0LL;
    qword_140C6A920 = 0LL;
    dword_140C6A944 = 0;
    word_140C6A940 = 0;
    HalpCmcPollingInitialized = 1;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpCmcFallbackLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
